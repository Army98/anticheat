#include <ntifs.h>


NTSTATUS HandleCallback();
OB_CALLBACK_REGISTRATION handle_callback;
OB_OPERATION_REGISTRATION handle_registration[2];

// pre / post operation callbacks
OB_PREOP_CALLBACK_STATUS preHandleCallback(PVOID RegistrationContext,
	 POB_PRE_OPERATION_INFORMATION OperationInformation);

VOID postHandleCallback(PVOID RegistrationContext,
	 POB_POST_OPERATION_INFORMATION OperationInformation);

PVOID regHandle;
