#ifndef		__ENV_SETTINGS_H__
#define		__ENV_SETTINGS_H__

#define		__CHT_CHARACTERS__
#define		__CHS_CHARACTERS__

#ifndef		__CHT_CHARACTERS__
	#if 0		//	1 for full set; 0 for others
	
		#define		__FULL_SET_CHARACTERS__
	
	#else
	
		#define		__SO_BIG_NUM__
	
		#ifdef		__FULL_SET_CHARACTERS__
			#undef		__FULL_SET_CHARACTERS__
		#endif		//__FULL_SET_CHARACTERS__
	
		#if 0		//	1 for fixed width; 0 for others
	
			#define		__BOLD_NUM_FIXED_WIDTH__
	
		#else
	
			#ifdef		__BOLD_NUM_FIXED_WIDTH__
				#undef		__BOLD_NUM_FIXED_WIDTH__
			#endif		//__BOLD_NUM_FIXED_WIDTH__
	
		#endif
	
	#endif
	
	
	#endif		//__ENV_SETTINGS_H__

#endif		//__CHT_CHARACTERS__

