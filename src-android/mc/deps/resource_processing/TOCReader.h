#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Core__FileHandlePool.h"
#include "mc/deps/core/file/File.h"

namespace Bedrock::Resources::Archive {

class TOCReader : public ::Bedrock::ImplBase<
                      Bedrock::Resources::Archive::TOCReader,
                      Bedrock::ImplCtor(Core::File, std::weak_ptr<Core::FileHandlePool>)> {};

} // namespace Bedrock::Resources::Archive
