#include "enum_handle.h"


int handleCallback()
{
	UNICODE_STRING altitude;
	RtlInitUnicodeString(&altitude, L"370000.1337");

	RtlZeroMemory(&handle_callback, sizeof(handle_callback));
	RtlZeroMemory(handle_registration, sizeof(handle_registration));

	handle_registration[0].ObjectType = PsProcessType;
	handle_registration[0].Operations = OB_OPERATION_HANDLE_CREATE;
	handle_registration[0].PreOperation = &preHandleCallback;
	handle_registration[0].PostOperation = &postHandleCallback;

	handle_registration[1].ObjectType = PsThreadType;
	handle_registration[1].Operations = OB_OPERATION_HANDLE_CREATE;
	handle_registration[1].PreOperation = &preHandleCallback;
	handle_registration[1].PostOperation = &postHandleCallback;

	handle_callback.Version = OB_FLT_REGISTRATION_VERSION;
	handle_callback.OperationRegistrationCount = ARRAYSIZE(handle_registration);
	handle_callback.Altitude = altitude;
	handle_callback.RegistrationContext = NULL;
	handle_callback.OperationRegistration = handle_registration;

	return 0;
}

OB_PREOP_CALLBACK_STATUS preHandleCallback(PVOID RegistrationContext, 
	POB_PRE_OPERATION_INFORMATION OperationInformation)
{
	UNREFERENCED_PARAMETER(RegistrationContext);
	UNREFERENCED_PARAMETER(OperationInformation);

	OB_PREOP_CALLBACK_STATUS CALLBACK_STATUS = OB_PREOP_SUCCESS;

	return CALLBACK_STATUS;
}

VOID postHandleCallback(PVOID RegistrationContext,
	POB_POST_OPERATION_INFORMATION OperationInformation)
{
	UNREFERENCED_PARAMETER(RegistrationContext);
	UNREFERENCED_PARAMETER(OperationInformation);

	return;
}