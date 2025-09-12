#pragma once

#include "Logging/LogMacros.h"

class UObject;

CATCHMEIFYOUCANT_API DECLARE_LOG_CATEGORY_EXTERN(LogCY, Log, All);

CATCHMEIFYOUCANT_API FString GetClientServerContextString(UObject* ContextObject = nullptr);
