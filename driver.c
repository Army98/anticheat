#include "driver.h"
#include "NotifyRoutines/image_notify_routine.h"
#include "NotifyRoutines/enum_handle.h"
#include <ntifs.h>


NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT DriverObject,
	_In_ PUNICODE_STRING RegistryPath)
{
	NTSTATUS STATUS = STATUS_SUCCESS;
	UNREFERENCED_PARAMETER(RegistryPath);

	DriverObject->DriverUnload = DriverUnload;
	STATUS = handleCallback();

	return STATUS;
}

VOID DriverUnload(PDRIVER_OBJECT DriverObject)
{
	UNREFERENCED_PARAMETER(DriverObject);
	ObUnRegisterCallbacks(regHandle);
	DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, "Bye");
}