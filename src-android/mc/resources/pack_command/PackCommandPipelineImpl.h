#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IPackCommandPipeline.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { class IResourceRepositories; }
// clang-format on

namespace PackCommand {

class PackCommandPipelineImpl : public ::PackCommand::IPackCommandPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<::PackCommand::IResourceRepositories>>> mRepositories;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<TaskGroup>>>                           mTaskGroup;
    // NOLINTEND
};

} // namespace PackCommand
