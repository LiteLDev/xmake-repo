#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/Core__FileHandlePool.h"
#include "mc/deps/core/file/File.h"
#else // @header-generator platform
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct ImplCtor; }
namespace Core { class File; }
namespace Core { class FileHandlePool; }
namespace Core { class PathView; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock::Resources::Archive {

class TOCReader : public ::Bedrock::ImplBase<
#if defined(LL_PLAT_A) // @header-generator platform
                      Bedrock::Resources::Archive::TOCReader,
                      Bedrock::ImplCtor(Core::File, std::weak_ptr<Core::FileHandlePool>)> {};
#else // @header-generator platform
                      ::Bedrock::Resources::Archive::TOCReader,
                      ::Bedrock::ImplCtor(::Core::File, ::std::weak_ptr<::Core::FileHandlePool>)> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const = 0;

    virtual void forEachIn(::brstd::function_ref<void(::std::string_view)> callback) const = 0;

    virtual ::Bedrock::Result<void> getAsset(::Core::PathView path, ::std::string& contents) const = 0;

    virtual bool hasAsset(::Core::PathView path) const = 0;

    virtual uint64 getApproxFootprintBytes() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::Resources::Archive
