#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IPackCommandPipeline.h"
#include "mc/resources/pack_command/MoveReplaceBatch.h"
#include "mc/resources/pack_command/RemoveBatch.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

namespace RepositoryLoading {

class PackCommandIntercept : public ::PackCommand::IPackCommandPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                     mTaskGroup;
    ::ll::TypedStorage<8, 24, ::PackCommand::MoveReplaceBatch> mMoveReplace;
    ::ll::TypedStorage<8, 24, ::PackCommand::RemoveBatch>      mRemove;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandIntercept& operator=(PackCommandIntercept const&);
    PackCommandIntercept(PackCommandIntercept const&);
    PackCommandIntercept();
};

} // namespace RepositoryLoading
