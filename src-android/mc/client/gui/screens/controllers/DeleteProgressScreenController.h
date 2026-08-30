#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ProgressHandler;
namespace Json { class Value; }
// clang-format on

class DeleteProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                                          mInitiated;
    ::ll::TypedStorage<1, 1, bool>                                          mNext;
    ::ll::TypedStorage<8, 24, std::string>                                  mCalledFrom;
    ::ll::TypedStorage<8, 8, long>                                          mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, long const>                                    mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProgressHandler>>              mProgressHandler;
    ::ll::TypedStorage<8, 48, std::deque<std::unique_ptr<ProgressHandler>>> mProgressHandlerList;
    // NOLINTEND

public:
    // prevent constructor by default
    DeleteProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeleteProgressScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;

    virtual std::string _getButtonADescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeleteProgressScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::deque<std::unique_ptr<ProgressHandler>>
    );

    MCNAPI std::string const _getProgressMessage() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<MinecraftScreenModel>, std::string const&, std::deque<std::unique_ptr<ProgressHandler>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
