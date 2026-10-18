#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Core { class PathView; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ResourceLocation {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ResourceLocation inner types declare
    // clang-format off
    struct TextureSetHelpers;
    // clang-format on

    // ResourceLocation inner types define
    struct TextureSetHelpers {
    public:
        // TextureSetHelpers inner types declare
        // clang-format off
        class ResourceHelper;
        // clang-format on

        // TextureSetHelpers inner types define
        enum class ColorPipeline : uint {};

        enum class LoadMode : uint {};

        class ResourceHelper {};
    };

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem> mFileSystem;
    ::ll::UntypedStorage<8, 24>                    mPath;
    ::ll::TypedStorage<8, 8, ulong>                mPathHash;
    ::ll::TypedStorage<8, 8, ulong>                mFullHash;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem>               mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<8, 8, uint64>                             mPathHash;
    ::ll::TypedStorage<8, 8, uint64>                             mFullHash;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ResourceLocation();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourceLocation& operator=(ResourceLocation const&);
    ResourceLocation();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceLocation(::ResourceLocation const&);
#else // @header-generator platform
    MCAPI explicit ResourceLocation(::Core::PathView path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceLocation(::Core::PathView, ::ResourceFileSystem);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ResourceLocation(::ResourceLocation const& rhs);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getFileSystemName() const;
#else // @header-generator platform
    MCAPI ResourceLocation(::Core::PathView path, ::ResourceFileSystem fileSystem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> getFullPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> getFullPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString getHashedPath() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::HashedString getHashedPath() const;

    MCAPI bool operator==(::ResourceLocation const& rhs) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const& getRelativePath() const;
#else // @header-generator platform
    MCAPI void setRelativePath(::Core::PathBuffer<::std::string> const& path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::ResourceLocation const&) const;

    MCNAPI void setRelativePath(::Core::PathBuffer<std::string> const&);

    MCNAPI ~ResourceLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ResourceLocation const& getEmptyLocation();
#else // @header-generator platform
    MCAPI ~ResourceLocation();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ResourceLocation const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Core::PathView path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::PathView, ::ResourceFileSystem);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ResourceLocation const& rhs);
#endif

    MCAPI void* $ctor(::Core::PathView path, ::ResourceFileSystem fileSystem);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
