#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Core { class PathView; }
namespace Json { class Value; }
// clang-format on

class ResourceLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem> mFileSystem;
    ::ll::UntypedStorage<8, 24>                    mPath;
    ::ll::TypedStorage<8, 8, ulong>                mPathHash;
    ::ll::TypedStorage<8, 8, ulong>                mFullHash;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceLocation(::ResourceLocation const&);

    MCNAPI ResourceLocation(::Core::PathView, ::ResourceFileSystem);

    MCNAPI std::string getFileSystemName() const;

    MCNAPI ::Core::PathBuffer<std::string> getFullPath() const;

    MCNAPI ::HashedString getHashedPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getRelativePath() const;

    MCNAPI bool operator==(::ResourceLocation const&) const;

    MCNAPI void setRelativePath(::Core::PathBuffer<std::string> const&);

    MCNAPI ~ResourceLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ResourceLocation const& getEmptyLocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceLocation const&);

    MCNAPI void* $ctor(::Core::PathView, ::ResourceFileSystem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
