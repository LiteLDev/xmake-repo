#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IPackCommandPipeline.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/pack_command/MoveReplaceBatch.h"
#include "mc/resources/pack_command/RemoveBatch.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class TaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace PackCommand { struct MoveReplaceBatch; }
namespace PackCommand { struct PackCommandHandle; }
namespace PackCommand { struct RemoveBatch; }
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
#endif // @header-generator platform
// clang-format on

namespace RepositoryLoading {

class PackCommandIntercept : public ::PackCommand::IPackCommandPipeline {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                     mTaskGroup;
    ::ll::TypedStorage<8, 24, ::PackCommand::MoveReplaceBatch> mMoveReplace;
    ::ll::TypedStorage<8, 24, ::PackCommand::RemoveBatch>      mRemove;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkd8d66c;
    ::ll::UntypedStorage<8, 24> mUnk688368;
    ::ll::UntypedStorage<8, 24> mUnk216a5b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandIntercept& operator=(PackCommandIntercept const&);
    PackCommandIntercept(PackCommandIntercept const&);
    PackCommandIntercept();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands) /*override*/;

    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&&) /*override*/;

    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&& commands) /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackCommand::PackCommandHandle $submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle
    $submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&&);

    MCNAPI ::PackCommand::PackCommandHandle $submitRemove(::PackCommand::RemoveBatch&& commands);

    MCNAPI ::TaskGroup& $getTaskGroup();


    // NOLINTEND
#endif // @header-generator platform
};

} // namespace RepositoryLoading
