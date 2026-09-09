#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/helpers/TintMapColor.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

namespace persona {

struct TextureTint {
public:
    // TextureTint inner types define
    enum class PathType : int {
        Regular = 0,
        TintMap = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>               mUniqueId;
    ::ll::TypedStorage<4, 64, ::TintMapColor>            mTintBaseColor;
    ::ll::TypedStorage<4, 64, ::TintMapColor>            mTintColor;
    ::ll::TypedStorage<1, 1, bool>                       mUseTint;
    ::ll::TypedStorage<1, 1, bool>                       mAnimated;
    ::ll::TypedStorage<4, 4, int>                        mAnimationFrames;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const Pack>> mSourcePack;
    ::ll::TypedStorage<8, 24, std::string>               mPath;
    ::ll::TypedStorage<8, 24, std::string>               mTintMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureTint(::persona::TextureTint const&);

    MCNAPI TextureTint(std::shared_ptr<const Pack>, std::string, std::string, std::string);

    MCNAPI TextureTint(
        std::shared_ptr<const Pack>,
        std::string,
        std::string,
        std::string,
        ::TintMapColor&,
        ::TintMapColor&,
        bool,
        bool,
        int
    );

    MCNAPI std::string const getPath(::persona::TextureTint::PathType) const;

    MCNAPI std::string const getUniquePath(::persona::TextureTint::PathType) const;

    MCNAPI bool const isPathEmpty(::persona::TextureTint::PathType) const;

    MCNAPI ~TextureTint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::TextureTint const&);

    MCNAPI void* $ctor(std::shared_ptr<const Pack>, std::string, std::string, std::string);

    MCNAPI void* $ctor(
        std::shared_ptr<const Pack>,
        std::string,
        std::string,
        std::string,
        ::TintMapColor&,
        ::TintMapColor&,
        bool,
        bool,
        int
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona
