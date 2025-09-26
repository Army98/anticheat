#include "image_notify_routine.h"



VOID ImageNotifyRoutine(PUNICODE_STRING FullImageName, HANDLE ProcessID, PIMAGE_INFO ImageInfo)
{
	/*
	* detect signed vs unsigned drivers, known-bad driver names and their hashes
	* detect known cheat DLLs, exe's, unusual DLLs mapped into game processes blah fegergr
	*/
	UNREFERENCED_PARAMETER(FullImageName);
	UNREFERENCED_PARAMETER(ProcessID);
	UNREFERENCED_PARAMETER(ImageInfo);

}