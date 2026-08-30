#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
