#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/MinorVersionPromotion.h"
#include "mc/deps/script_core/script_engine/scripting/MissingModuleRequest.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/script_engine/scripting/VersionConflict.h"

namespace Scripting {

struct ModuleResolveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDescriptor>>      orderedModules;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::MissingModuleRequest>>  missingModuleRequests;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::MissingModuleRequest>>  missingModuleVersionRequests;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::VersionConflict>>       versionConflicts;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::MinorVersionPromotion>> versionPromotions;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleResolveResult& operator=(ModuleResolveResult const&);
    ModuleResolveResult(ModuleResolveResult const&);
};

} // namespace Scripting
