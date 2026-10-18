#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { struct MoveReplaceBatch; }
namespace PackCommand { struct PackCommandHandle; }
namespace PackCommand { struct RemoveBatch; }
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

#endif // @header-generator platform
namespace PackCommand {

#if defined(LL_PLAT_A) // @header-generator platform
class IPackCommandPipeline : public ::Bedrock::EnableNonOwnerReferences {};
#else // @header-generator platform
class IPackCommandPipeline : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackCommandPipeline() /*override*/ = default;

    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands) = 0;

    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&& commands) = 0;

    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&& commands) = 0;

    virtual ::TaskGroup& getTaskGroup() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace PackCommand
