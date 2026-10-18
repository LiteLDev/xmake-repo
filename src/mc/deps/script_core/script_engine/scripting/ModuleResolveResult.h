#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/MinorVersionPromotion.h"
#include "mc/deps/script_core/script_engine/scripting/MissingModuleRequest.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/script_engine/scripting/VersionConflict.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct ModuleResolveResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDescriptor>>      orderedModules;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::MissingModuleRequest>>  missingModuleRequests;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::MissingModuleRequest>>  missingModuleVersionRequests;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::VersionConflict>>       versionConflicts;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::MinorVersionPromotion>> versionPromotions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk89d9eb;
    ::ll::UntypedStorage<8, 24> mUnk885506;
    ::ll::UntypedStorage<8, 24> mUnk687eb0;
    ::ll::UntypedStorage<8, 24> mUnk120dd9;
    ::ll::UntypedStorage<8, 24> mUnk7020a3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleResolveResult& operator=(ModuleResolveResult const&);
    ModuleResolveResult(ModuleResolveResult const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ModuleResolveResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ModuleResolveResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Scripting
