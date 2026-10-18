#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace cg { class ImageBuffer; }
namespace mce { class TexturePtr; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
class TemporaryTextureHolder {
public:
    // TemporaryTextureHolder inner types define
    using ImageId = ulong;

    using TextureResource = std::variant<cg::ImageBuffer, mce::TexturePtr, std::shared_ptr<GeometryAtlas::IAtlasTile>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 8, ulong> mId;
    ::ll::TypedStorage<8, 24, std::map<ulong, std::variant<cg::ImageBuffer, mce::TexturePtr, std::shared_ptr<GeometryAtlas::IAtlasTile>>>> mTextureResources;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void dropImageBuffer(ulong);

    MCNAPI ulong holdImageBuffer(::cg::ImageBuffer);

    MCNAPI ~TemporaryTextureHolder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TemporaryTextureHolder {
public:
    // TemporaryTextureHolder inner types define
    using ImageId = uint64;

    using TextureResource =
        ::std::variant<::cg::ImageBuffer, ::mce::TexturePtr, ::std::shared_ptr<::GeometryAtlas::IAtlasTile>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<8, 8, uint64>                       mId;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            uint64,
            ::std::variant<::cg::ImageBuffer, ::mce::TexturePtr, ::std::shared_ptr<::GeometryAtlas::IAtlasTile>>>>
        mTextureResources;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void dropImageBuffer(uint64 id);

    MCAPI uint64 holdTexturePtr(::mce::TexturePtr texture);
    // NOLINTEND
};
#else // @header-generator platform
class TemporaryTextureHolder {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
