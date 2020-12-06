#pragma warning (disable : 4100)

#include "JMHG_DRIVER.h"
#include "DebugMsg.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath)
{
	pDriverObject->DriverUnload = UnloadDriver;
	DebugMessage("JMHG - CSGO KERNEL DRIVER CHEAT");
	DebugMessage("[EVENT] JMHG DRIVER LOADED");
	return STATUS_SUCCESS;

}

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject)
{
	DebugMessage("[EVENT] JMHG DRIVER UNLOADED");
	return STATUS_SUCCESS;
}