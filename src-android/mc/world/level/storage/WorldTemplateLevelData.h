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
    ::ll::UntypedStorage<8, 48>                  mWorldTemplateIdentity;
    ::ll::UntypedStorage<8, 32>                  mBaseGameVersion;
    ::ll::UntypedStorage<8, 32>                  mMaxBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>               mIsFromWorldTemplate;
    ::ll::TypedStorage<1, 1, bool>               mIsWorldTemplateOptionLocked;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&);
    WorldTemplateLevelData(WorldTemplateLevelData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateLevelData();

    MCNAPI WorldTemplateLevelData(::WorldTemplateLevelData&&);

    MCNAPI WorldTemplateLevelData(bool, bool, ::BaseGameVersion const&, ::BaseGameVersion const&);

    MCNAPI void _getTagData(::CompoundTag const&);

    MCNAPI void _setTagData(::CompoundTag&) const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::WorldTemplateLevelData&&);

    MCNAPI void* $ctor(bool, bool, ::BaseGameVersion const&, ::BaseGameVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
