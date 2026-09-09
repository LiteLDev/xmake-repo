#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ResourcePackFileDownloadError.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/SharedAsync.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
// clang-format on

class IResourcePackFileDownloaderManager {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IResourcePackFileDownloaderManager() = default;

    virtual void tryStartDownloadingFile(::TaskGroup&, std::string const&, uint, int, ulong, std::string const&, bool, ::PackType, std::function<void ()>, std::function<void (float, ulong)>, std::function<void (const Core::Path&)>, std::function<void (ResourcePackFileDownloadError)>) = 0;

    virtual ::Bedrock::Threading::SharedAsync<void> chunkReceived(::TaskGroup&, std::string const&, ::FileChunkInfo const&, std::vector<uchar>) = 0;

    virtual void cleanup() = 0;
    // clang-format on
    // NOLINTEND
};
