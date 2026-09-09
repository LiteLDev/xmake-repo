#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/SkinPackMeta.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IEntitlement;
class PackManifest;
class PersonaClient;
class Skin;
class SkinPack;
// clang-format on

class SkinPackModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PersonaClient&>  mPersonaClient;
    ::ll::UntypedStorage<8, 8>                  mEntitlement;
    ::ll::UntypedStorage<8, 48>                 mPackIdentity;
    ::ll::TypedStorage<8, 2048, ::SkinPackMeta> mSkinPackMetaData;
    ::ll::TypedStorage<4, 4, int>               mFirstVisibleSkinIndex;
    ::ll::TypedStorage<4, 4, int>               mSelectedSkinIndex;
    ::ll::TypedStorage<1, 1, bool>              mIsOfflineLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPackModel& operator=(SkinPackModel const&);
    SkinPackModel(SkinPackModel const&);
    SkinPackModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPackModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinPackModel(::PackIdVersion const&, ::PersonaClient&, ::IEntitlement const*);

    MCNAPI SkinPackModel(::PackManifest const&, ::PersonaClient&, ::IEntitlement const*, bool);

    MCNAPI bool areAnySkinsUnlocked() const;

    MCNAPI void decrementFirstVisibleSkinIndex(int);

    MCNAPI int getFirstVisibleSkinIndex() const;

    MCNAPI std::string const& getLocName() const;

    MCNAPI ::SkinPackMeta const& getMetaData() const;

    MCNAPI int getNumSkins() const;

    MCNAPI ::PackIdVersion const& getPackIdentity() const;

    MCNAPI std::string const& getProductId() const;

    MCNAPI std::string const& getSkinName(int) const;

    MCNAPI void incrementFirstVisibleSkinIndex(int);

    MCNAPI bool isCustomSkinPack() const;

    MCNAPI bool isInPackage() const;

    MCNAPI bool isLimitedUsageSkinPack() const;

    MCNAPI bool isOfflineOrSideLoaded() const;

    MCNAPI bool isPlatformLocked() const;

    MCNAPI bool isSideLoaded() const;

    MCNAPI bool isSkinLocked(int) const;

    MCNAPI bool isSkinPackOwned() const;

    MCNAPI bool isValid() const;

    MCNAPI bool isVanillaSkinPack() const;

    MCNAPI void setLastCustomSkin(int);

    MCNAPI void setMetaData(::SkinPackMeta const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackIdVersion const&, ::PersonaClient&, ::IEntitlement const*);

    MCNAPI void* $ctor(::PackManifest const&, ::PersonaClient&, ::IEntitlement const*, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
