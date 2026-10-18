#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Tag;
// clang-format on

class CompoundTagEditHelper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Tag*>                    mTag;
    ::ll::TypedStorage<8, 24, std::vector<Tag*>>        mParentTag;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mTagName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk76e80d;
    ::ll::UntypedStorage<8, 24> mUnk9ba84f;
    ::ll::UntypedStorage<8, 24> mUnk43c659;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CompoundTagEditHelper& operator=(CompoundTagEditHelper const&);
    CompoundTagEditHelper(CompoundTagEditHelper const&);
#endif // @header-generator platform
    CompoundTagEditHelper();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag const* getParent() const;

    MCNAPI void pushChild(std::string const&);

    MCNAPI void replaceWith(std::string const&, std::unique_ptr<Tag>);

    MCNAPI ~CompoundTagEditHelper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void replaceWith(::std::string const& newTagName, ::std::unique_ptr<::Tag> newTag);
#endif // @header-generator platform
    // NOLINTEND
};
