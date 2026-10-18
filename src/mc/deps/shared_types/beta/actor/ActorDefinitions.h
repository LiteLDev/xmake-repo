#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ACTORDEFINITIONS
#define LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ACTORDEFINITIONS
namespace SharedTypes::Comprehensive { class ActorDefinitions {}; }
#endif
// clang-format on
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_40/actor/ActorDefinitions.h"
#endif // @header-generator platform

namespace SharedTypes::Beta {

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDefinitions : public ::SharedTypes::Comprehensive::ActorDefinitions {};
#else // @header-generator platform
struct ActorDefinitions : public ::SharedTypes::v1_26_40::ActorDefinitions {};
#endif // @header-generator platform

} // namespace SharedTypes::Beta
