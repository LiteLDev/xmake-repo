#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class WorldTemplateLevelData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mPremiumTemplateContentIdentity;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                  mWorldTemplateIdentity;
    ::ll::UntypedStorage<8, 32>                  mBaseGameVersion;
    ::ll::UntypedStorage<8, 32>                  mMaxBaseGameVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::PackIdVersion>   mWorldTemplateIdentity;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion> mBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion> mMaxBaseGameVersion;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>               mIsFromWorldTemplate;
    ::ll::TypedStorage<1, 1, bool>               mIsWorldTemplateOptionLocked;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&);
    WorldTemplateLevelData(WorldTemplateLevelData const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldTemplateLevelData();
#else // @header-generator platform
    MCAPI WorldTemplateLevelData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldTemplateLevelData(::WorldTemplateLevelData&&);
#else // @header-generator platform
    MCAPI void _getTagData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldTemplateLevelData(bool, bool, ::BaseGameVersion const&, ::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void _setTagData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _getTagData(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void setBaseGameVersion(::BaseGameVersion const& baseGameVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setTagData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void setMaxBaseGameVersion(::BaseGameVersion const& maxBaseGameVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCNAPI void getTagData(::CompoundTag const&);

    MCNAPI ::PackIdVersion const& getWorldTemplateIdentity() const;

    MCNAPI bool isFromWorldTemplate() const;

    MCNAPI bool isWorldTemplateOptionLocked() const;

    MCNAPI void setBaseGameVersion(::BaseGameVersion const&);

    MCNAPI void setContentIdentity(::ContentIdentity const&);

    MCNAPI void setIsFromWorldTemplate(bool);

    MCNAPI void setIsWorldTemplateOptionLocked(bool);

    MCNAPI void setMaxBaseGameVersion(::BaseGameVersion const&);

    MCNAPI void setTagData(::CompoundTag&) const;

    MCNAPI void setWorldTemplateIdentity(::PackIdVersion const&);

    MCNAPI ~WorldTemplateLevelData();
#else // @header-generator platform
    MCAPI void setWorldTemplateIdentity(::PackIdVersion const& identity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::WorldTemplateLevelData&&);

    MCNAPI void* $ctor(bool, bool, ::BaseGameVersion const&, ::BaseGameVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
