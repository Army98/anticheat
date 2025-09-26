#pragma once
#include <ntifs.h>


VOID ImageNotifyRoutine(PUNICODE_STRING FullImageName, HANDLE ProcessI, PIMAGE_INFO ImageInfo);