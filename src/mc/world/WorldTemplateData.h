#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/UUID.h"
#include "mc/resources/WorldTemplatePackManifest.h"
#else // @header-generator platform
#endif // @header-generator platform

struct WorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        mName;
    ::ll::TypedStorage<8, 24, std::string>                        mDescription;
    ::ll::TypedStorage<8, 24, std::string>                        mAuthors;
    ::ll::TypedStorage<8, 24, std::string>                        mVersion;
    ::ll::UntypedStorage<8, 24>                                   mPath;
    ::ll::TypedStorage<8, 24, std::string>                        mGameType;
    ::ll::UntypedStorage<8, 24>                                   mWorldIconPath;
    ::ll::UntypedStorage<8, 760>                                  mManifest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const std::string>> mAllowListPath;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                        mCollectionKey;
    ::ll::TypedStorage<1, 1, bool>                                mWorldIconOverride;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk2dc191;
    ::ll::UntypedStorage<8, 32>  mUnkfb1eb1;
    ::ll::UntypedStorage<8, 32>  mUnk106a25;
    ::ll::UntypedStorage<8, 32>  mUnkfd7e26;
    ::ll::UntypedStorage<8, 32>  mUnk8f7e5d;
    ::ll::UntypedStorage<8, 32>  mUnke18ed3;
    ::ll::UntypedStorage<8, 32>  mUnk380513;
    ::ll::UntypedStorage<8, 840> mUnkc6b6a4;
    ::ll::UntypedStorage<8, 16>  mUnkb59be3;
    ::ll::UntypedStorage<8, 16>  mUnk3183c8;
    ::ll::UntypedStorage<1, 1>   mUnkb8fe4c;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    WorldTemplateData& operator=(WorldTemplateData const&);
    WorldTemplateData();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    WorldTemplateData& operator=(WorldTemplateData const&);
    WorldTemplateData(WorldTemplateData const&);
    WorldTemplateData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    WorldTemplateData& operator=(WorldTemplateData const&);
    WorldTemplateData();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldTemplateData(::WorldTemplateData const&);
#else // @header-generator platform
    MCNAPI WorldTemplateData(::WorldTemplateData&&);

#ifdef LL_PLAT_C
    MCNAPI WorldTemplateData(::WorldTemplateData const&);
#endif

    MCNAPI ~WorldTemplateData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorldTemplateData const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::WorldTemplateData&&);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::WorldTemplateData const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
