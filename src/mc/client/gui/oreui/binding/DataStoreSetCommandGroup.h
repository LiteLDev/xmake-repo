#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace GameplayUI { class DataDrivenScreenAPI; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace GameplayUI { class DataDrivenScreenAPI; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class DataStoreSetCommandGroup : public ::OreUI::CommandGroupBase<OreUI::DataStoreSetCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                  mDataStore;
    ::ll::UntypedStorage<8, 144>                                 mSetString;
    ::ll::UntypedStorage<8, 144>                                 mSetNumber;
    ::ll::UntypedStorage<8, 144>                                 mSetBool;
    ::ll::UntypedStorage<8, 144>                                 mButtonPress;
    ::ll::UntypedStorage<8, 144>                                 mCloseButtonPress;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                    mPacketSender;
    ::ll::TypedStorage<8, 8, ::GameplayUI::DataDrivenScreenAPI*> mDataDrivenScreenAPI;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreSetCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSetCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void buttonPress(std::string, std::string, std::string);

    MCNAPI void closeButtonPress(std::string, std::string, std::string);

    MCNAPI void setBool(std::string, std::string, std::string, bool);

    MCNAPI void setNumber(std::string, std::string, std::string, double);

    MCNAPI void setString(std::string, std::string, std::string, std::string);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
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
class DataStoreSetCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::DataStoreSetCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::DDUI::DataStoreSyncClient*> mDataStore;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, ::std::string>>
        mSetString;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, double>>
        mSetNumber;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, bool>>
        mSetBool;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>>
        mButtonPress;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>>
                                                                 mCloseButtonPress;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                    mPacketSender;
    ::ll::TypedStorage<8, 8, ::GameplayUI::DataDrivenScreenAPI*> mDataDrivenScreenAPI;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void buttonPress(::std::string dataStore, ::std::string property, ::std::string path);

    MCAPI void closeButtonPress(::std::string dataStore, ::std::string property, ::std::string path);

    MCAPI void setBool(::std::string dataStoreName, ::std::string property, ::std::string path, bool data);

    MCAPI void setNumber(::std::string dataStoreName, ::std::string property, ::std::string path, double data);

    MCAPI void setString(::std::string dataStoreName, ::std::string property, ::std::string path, ::std::string data);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
    // NOLINTEND
};
#else // @header-generator platform
class DataStoreSetCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
