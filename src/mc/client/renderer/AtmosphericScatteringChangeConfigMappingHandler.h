#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/common/editor/IClientDataTransferConfigurationMappingHandler.h"

class AtmosphericScatteringChangeConfigMappingHandler
: public ::Editor::Services::IClientDataTransferConfigurationMappingHandler {};
#else // @header-generator platform
class AtmosphericScatteringChangeConfigMappingHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
