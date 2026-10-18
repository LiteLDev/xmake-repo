#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
namespace Realms { struct WorldBackup; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldBackupData : public ::OreUI::PropertyObject<OreUI::WorldBackupData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    ::ll::UntypedStorage<8, 168> mWorldName;
    ::ll::UntypedStorage<8, 168> mBackupName;
    ::ll::UntypedStorage<8, 152> mEpochTime;
    ::ll::UntypedStorage<8, 168> mDatePosted;
    ::ll::UntypedStorage<8, 168> mTimePosted;
    ::ll::UntypedStorage<8, 152> mUncompressedSizeBytes;
    ::ll::UntypedStorage<8, 152> mCompressedSizeBytes;
    ::ll::UntypedStorage<8, 168> mGameServerVersion;
    ::ll::UntypedStorage<8, 104> mEnabledBehaviorPacks;
    ::ll::UntypedStorage<8, 104> mEnabledResourcePacks;
    ::ll::UntypedStorage<8, 152> mIsHardcore;
    ::ll::UntypedStorage<8, 152> mGameMode;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldBackupData& operator=(WorldBackupData const&);
    WorldBackupData(WorldBackupData const&);
    WorldBackupData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldBackupData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldBackupData(::Realms::WorldBackup const&);

    MCNAPI WorldBackupData(::OreUI::WorldBackupData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::WorldBackup const&);

    MCNAPI void* $ctor(::OreUI::WorldBackupData&&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldBackupData : public ::OreUI::PropertyObject<::OreUI::WorldBackupData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mWorldName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mBackupName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>         mEpochTime;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDatePosted;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTimePosted;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>         mUncompressedSizeBytes;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>         mCompressedSizeBytes;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGameServerVersion;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mEnabledBehaviorPacks;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
                                                        mEnabledResourcePacks;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mIsHardcore;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>  mGameMode;
    // NOLINTEND
};
#else // @header-generator platform
class WorldBackupData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
