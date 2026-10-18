#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IPackCommandPipeline.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { class IResourceRepositories; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace PackCommand { struct MoveReplaceBatch; }
namespace PackCommand { struct PackCommandHandle; }
namespace PackCommand { struct RemoveBatch; }
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
#endif // @header-generator platform
// clang-format on

namespace PackCommand {

class PackCommandPipelineImpl : public ::PackCommand::IPackCommandPipeline {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<::PackCommand::IResourceRepositories>>> mRepositories;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<TaskGroup>>>                           mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnke259f5;
    ::ll::UntypedStorage<8, 16> mUnk39534f;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandPipelineImpl& operator=(PackCommandPipelineImpl const&);
    PackCommandPipelineImpl(PackCommandPipelineImpl const&);
    PackCommandPipelineImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands) /*override*/;

    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&& commands) /*override*/;

    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&& commands) /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackCommandPipelineImpl(
        ::std::unique_ptr<::TaskGroup>                          taskGroup,
        ::std::unique_ptr<::PackCommand::IResourceRepositories> repositories
    );

    MCNAPI ::PackCommand::PackCommandHandle enqueueCommands(
        ::std::variant<
            ::PackCommand::UpgradeLegacyDependenciesBatch,
            ::PackCommand::MoveReplaceBatch,
            ::PackCommand::RemoveBatch>&& commands
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::TaskGroup>                          taskGroup,
        ::std::unique_ptr<::PackCommand::IResourceRepositories> repositories
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackCommand::PackCommandHandle $submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle
    $submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle $submitRemove(::PackCommand::RemoveBatch&& commands);

    MCNAPI ::TaskGroup& $getTaskGroup();


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PackCommand
