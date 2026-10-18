#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/IUserDataObject.h"
#include "mc/client/persona/LegacySkinSerialization.h"
#include "mc/client/persona/PersonaAppearance.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
namespace Json { class Value; }
// clang-format on

namespace persona {

class Profile : public ::Social::IUserDataObject {
public:
    // Profile inner types define
    using AppearanceMap = std::map<std::string, PersonaAppearance>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                         mVersion;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType const>              mType;
    ::ll::TypedStorage<8, 24, std::string const>                        mProfileTypeStr;
    ::ll::TypedStorage<8, 24, std::string>                              mGameTitleIdString;
    ::ll::UntypedStorage<8, 24>                                         mPersonaRepository;
    ::ll::TypedStorage<8, 24, std::map<std::string, PersonaAppearance>> mTitlePlatformLockedAppearances;
    ::ll::TypedStorage<8, 24, std::map<std::string, PersonaAppearance>> mTitleLockedAppearances;
    ::ll::TypedStorage<8, 24, std::map<std::string, PersonaAppearance>> mPlatformLockedAppearances;
    ::ll::UntypedStorage<8, 952>                                        mUniversalAppearance;
    ::ll::UntypedStorage<8, 952>                                        mLastSavedAppearance;
    ::ll::TypedStorage<8, 104, ::persona::LegacySkinSerialization>      mLegacyAppearance;
    ::ll::TypedStorage<8, 104, ::persona::LegacySkinSerialization>      mLastSavedLegacyAppearance;
    ::ll::TypedStorage<1, 1, bool>                                      mCanSave;
    ::ll::TypedStorage<1, 1, bool>                                      mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                                      mLoadingFailed;
    ::ll::TypedStorage<1, 1, bool>                                      mOfflineUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    Profile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Profile();

    virtual std::string const& getObjectName() const;

    virtual bool fillFromJSON(::Json::Value const&);

    virtual ::Json::Value toJSONObject() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Profile(::persona::ProfileType, ::gsl::not_null<Bedrock::NonOwnerPointer<IPersonaRepository>>);

    MCNAPI bool canSave() const;

    MCNAPI void clear();

    MCNAPI void clearDirty(std::string const&);

    MCNAPI void clearFailureStatus();

    MCNAPI void deleteLegacyAppearance();

    MCNAPI void enableSaving();

    MCNAPI bool getIsDirty(std::string const&);

    MCNAPI ::PersonaAppearance& getLastValidAppearance(std::string const&);

    MCNAPI ::persona::LegacySkinSerialization& getLegacyAppearance();

    MCNAPI bool getOfflineUpdated() const;

    MCNAPI bool isInitialized() const;

    MCNAPI void setAppearance(::PersonaAppearance, std::string const&);

    MCNAPI void setInitialized(bool);

    MCNAPI void setLoadingToFailed();

    MCNAPI void setOfflineUpdated(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::ProfileType, ::gsl::not_null<Bedrock::NonOwnerPointer<IPersonaRepository>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getObjectName() const;

    MCNAPI bool $fillFromJSON(::Json::Value const&);

    MCNAPI ::Json::Value $toJSONObject() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
