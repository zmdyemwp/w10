#ifndef __STORAGE_H
#define __STORAGE_H

#define STORAGE_ID_VALUE				0x47544946

#define PACE_INVALID				1440

#define STORAGE_STATE_GPS				(1<<0)
#define STORAGE_STATE_GSENSOR			(1<<1)
#define STORAGE_STATE_ANT_HR			(1<<8)
#define STORAGE_STATE_ANT_FOOTPOD		(1<<9)
#define STORAGE_STATE_ANT_BIKE			(1<<10)
#define STORAGE_STATE_BLE_HR			(1<<12)
#define STORAGE_STATE_BLE_FOOTPOD		(1<<13)
#define STORAGE_STATE_BLE_BIKE			(1<<14)
#define STORAGE_STATE_BLE_FINDER		(1<<16)
#define STORAGE_STATE_BLUETOOTH			(1<<23)
#define STORAGE_STATE_BAROMETER			(1<<24)

#define STORAGE_AVAILABLE_DISTANCE		(1<<0)
#define STORAGE_AVAILABLE_CALORIES		(1<<1)
#define STORAGE_AVAILABLE_STEP			(1<<4)
#define STORAGE_AVAILABLE_CADENCE		(1<<5)
#define STORAGE_AVAILABLE_HEARTRATE		(1<<7)
#define STORAGE_AVAILABLE_SPEED			(1<<9)
#define STORAGE_AVAILABLE_ELEVATION		(1<<10)
#define STORAGE_AVAILABLE_LENGTHS		(1<<11)
#define STORAGE_AVAILABLE_SWIMTYPE		(1<<12)
#define STORAGE_AVAILABLE_GPS			(1<<16)	//Include Satelcnt, Lat, Long, Accuracy, Altitude
#define STORAGE_AVAILABLE_GPS_FIX		(1<<17)
#define STORAGE_AVAILABLE_GPS_ACCURACY	(1<<18)
#define STORAGE_AVAILABLE_GPS_ACCURACY_V (1<<19)


typedef struct {
	unsigned int Ascent;			// Total Ascent: Number (1/10 Meter)
	unsigned int Descent;			// Total Descent: Number (1/10 Meter)
	unsigned char HRAverage;		// Sensor: Heart Rate - Average: Number (bpm)
	unsigned char HRAverageMax;		// Sensor: Heart Rate - Average Max: Number (bpm)
	unsigned char HRMax;			// Sensor: Heart Rate - Max: Number (bpm)
	unsigned char HRReserve;		// Reserve for Heart Rate
	unsigned int Efficiency;		// Swim Average Efficiency
	unsigned int SWOLF;				// Swim Average SWOLF
	unsigned int MoveTime;			// Total Moving Time (mSec)
	unsigned int Reserve[10];
}STORAGE_CONCLUSION, *P_STORAGE_CONCLUSION;

// Total 128 Bytes
typedef struct {
	unsigned int Id;				// File's Id. Content is 0x47544957
	unsigned int Version;			// 0xDDCCBBAA: AA:Major, BB:Minor, CC:Build, vMajor.Minor.Build:v1.83.XX
	unsigned short Year;			// RTC's Year
	unsigned char Month;			// RTC's Month
	unsigned char Day;				// RTC's Day
	unsigned char Hour;				// RTC's Hour (24 Hour)
	unsigned char Min;				// RTC's Minute
	unsigned char Sec;				// RTC's Second
	unsigned char Mode;				// Mode: 1:Run, 2:Bike, 3:Open Swim, 4:Other, 5:Pool Swim
	unsigned short Weight;			// Weight: Number (kg)
	unsigned short Height;			// Height: Number (cm)
	unsigned short Gender;			// Gender: 0:Male, 1:Female
	unsigned short Age;				// Age: Number
	unsigned short MaxHR;			// User Max Heart Rate: Number (bpm)
	unsigned short RestHR;			// User Rest Heart Rate: Number (bpm)
	unsigned int Reserve[9];
	STORAGE_CONCLUSION Conclusion;
}STORAGE_HEAD, *P_STORAGE_HEAD;

typedef struct {
	unsigned int Tick;		// Run Tick (mSec)
	unsigned int Available;	// Refer define STORAGE_AVAILABLE_XXXXXX
	unsigned int SensorState;
	unsigned short Lap;		// Lap(Interval):Number
	unsigned char HeartRate;// bpm
	unsigned char SwimType;	// 0:Mix, 1:breast stroke, 2:free style, 3:butterfly stroke, 4:back stroke
	unsigned int Step;		// Run:Step, Swim:Strokes, Bike:Cycle
	unsigned int Cadence;	// Run,Bike:Cadence, Swim:Stroke Rate
	int Elevation;			// 1/10 meter
	unsigned int Speed;		// Run,Bike Speed:Number(0.1km per Hour), Swim:Number(m per Hour)
	unsigned int Calories;	// kCol
	unsigned int Distance;	// meter
	unsigned int Lengths;	// Pool Swim Lengths
	unsigned short Accuracy;	//GPS Horizontal Accurcay
	unsigned short VAccuracy;	//GPS Veritcal Accurcay
	double Lat;				// Latitude
	double Long;			// Longitude
}STORAGE_DATA, *P_STORAGE_DATA;



#define STORAGE_GPS_VALUE				0x10

#define STORAGE_ANT_HEARTBEAT_VALUE		0x20
#define STORAGE_ANT_PEDOMETER_VALUE		0x21
#define STORAGE_ANT_BIKE_VALUE			0x22

#define STORAGE_BAROMETER_VALUE			0x30	//Barometer
#define STORAGE_TEMPERATURE_VALUE		0x31	//Temperature
#define STORAGE_COMPASS_VALUE			0x35	//Compass Info
#define STORAGE_GSENSOR_VALUE			0x36	//GSensor

#define STORAGE_LAP_VALUE				0x82	//LAP


// Total 28 Bytes
// STORAGE_GPS	0x10
typedef struct {
	unsigned int Tick;
	double Lat;				// Latitude 
	double Long;			// Longitude
	double Speed;
}STORAGE_GPS, *P_STORAGE_GPS;

// Total 8 Bytes
// STORAGE_ANT_HEARTBEAT 0x20
typedef struct {
	unsigned int Tick;
	unsigned int Data;
}STORAGE_HEARTBEAT, *P_STORAGE_HEARTBEAT;

// Total 8 Bytes
// STORAGE_ANT_PEDOMETER 0x21
typedef struct {
	unsigned int Tick;
	unsigned int Data;
}STORAGE_PEDOMETER, *P_STORAGE_PEDOMETER;

// Total 8 Bytes
// STORAGE_ANT_BIKE 0x22
typedef struct {
	unsigned int Tick;
	unsigned int Data;
}STORAGE_BIKE, *P_STORAGE_BIKE;

// Total 8 Bytes
// STORAGE_BAROMETER 0x30
typedef struct {
	unsigned int Tick;
	unsigned int Data;
}STORAGE_BAROMETER, *P_STORAGE_BAROMETER;

// Total 8 Bytes
// STORAGE_TEMPERATURE 0x31
typedef struct {
	unsigned int Tick;
	unsigned int Data;
}STORAGE_TEMPERATURE, *P_STORAGE_TEMPERATURE;


// Total 20 Bytes
// STORAGE_LAP 0x82
typedef struct {
	unsigned int Tick;
	double Speed;				// Lap Average Speed: Number (m/h)
	double Distance;			// Lap Distance: Number (Meter)
}STORAGE_LAP, *P_STORAGE_LAP;


typedef struct {
	unsigned int P1;		// Lat Pos, N=0, S=1
	unsigned int D1;		// Lat Degree
	unsigned int M1;		// Lat Minute
	unsigned int S1;		// Lat Second
	unsigned int cS1;		// Lat 1/100 Second
	unsigned int P2;		// Long Degree, E=0, W=1
	unsigned int D2;		// Long Degree
	unsigned int M2;		// Long Minute
	unsigned int S2;		// Long Second
	unsigned int cS2;		// Long 1/100 Second
	unsigned int High;		// High		//cm
}STORAGE_GPS_LOCATION, *P_STORAGE_GPS_LOCATION;


typedef struct {
	unsigned int Distance;		// Virtual Race Distance
	unsigned int Time;			// Virtual Race Time(Sec)
}STORAGE_VR_LOCATION, *P_STORAGE_VR_LOCATION;




#define STORAGE_WORKOUT_STATE_OFF			0
#define STORAGE_WORKOUT_STATE_RUN			1
#define STORAGE_WORKOUT_STATE_REST			2
#define STORAGE_WORKOUT_STATE_WARMUP		8
#define STORAGE_WORKOUT_STATE_COOLDOWN		9

#define STORAGE_WORKOUT_TYPE_LAPPRESS		0
#define STORAGE_WORKOUT_TYPE_TIME			1
#define STORAGE_WORKOUT_TYPE_DISTANCE		2
#define STORAGE_WORKOUT_TYPE_HR_GT			3	// >
#define STORAGE_WORKOUT_TYPE_HR_ST			4	// <
#define STORAGE_WORKOUT_TYPE_CALORIC		5

typedef struct {
	unsigned int State;			// Workout State: 0:Off, 1:Execute, 2:Rest, 8:Warm Up, 9:Cool Down
	unsigned int Type;			// Workout Type: 0:LapPress, 1:Time, 2:Distance, 3:HR_GT, 4:HR_ST, 5:Caloric
	unsigned int Info;			// Workout Info
}STORAGE_WORKOUT_DATA, *P_STORAGE_WORKOUT_DATA;


typedef struct {
	STORAGE_WORKOUT_DATA Arr[12];
}STORAGE_WORKOUT, *P_STORAGE_WORKOUT;

typedef struct {
	unsigned short Year;			// RTC's Year
	unsigned char Month;			// RTC's Month
	unsigned char Day;				// RTC's Day
	unsigned char Hour;				// RTC's Hour (24 Hour)
	unsigned char Min;				// RTC's Minute
	unsigned char Sec;				// RTC's Second
	unsigned char Type;				// Message Type: 0:Text, 1:Picture
	// Type 0
	unsigned char MSGHead[12];		// Message Head
	unsigned char MSG[3][30];		// Message Content
	//Type 1
	unsigned int X;			// Message Picture X
	unsigned int Y;			// Message Picture Y
	unsigned int Width;		// Message Picture Width
	unsigned int Height;	// Message Picture Height
	unsigned char Picture[2000];	// Message Picture
}STORAGE_NOTIFY, *P_STORAGE_NOTIFY;



#endif
