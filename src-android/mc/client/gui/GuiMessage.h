#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SoundDirection.h"

class GuiMessage {
public:
    // GuiMessage inner types define
    enum class MessageType : int {
        None                     = 0,
        ChatMessage              = 1,
        ClientMessage            = 2,
        LocalizedMessage         = 3,
        SystemMessage            = 4,
        WhisperMessage           = 5,
        TextObjectMessage        = 6,
        TextObjectWhisperMessage = 7,
        AnnouncementMessage      = 8,
        AudioSubtitleMessage     = 9,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GuiMessage::MessageType>   mType;
    ::ll::TypedStorage<8, 24, std::string>                mMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    ::ll::TypedStorage<8, 24, std::string>                mTTSMessage;
    ::ll::TypedStorage<8, 24, std::string>                mUsername;
    ::ll::TypedStorage<8, 24, std::string>                mFullString;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredFullString;
    ::ll::TypedStorage<8, 24, std::string>                mAuthorXuid;
    ::ll::TypedStorage<1, 1, bool>                        mForceVisible;
    ::ll::TypedStorage<1, 1, bool>                        mTTSRequired;
    ::ll::TypedStorage<4, 4, float>                       mDuration;
    ::ll::TypedStorage<1, 1, bool>                        mHasBeenSeen;
    ::ll::TypedStorage<1, 1, bool>                        mHasEverBeenSeen;
    ::ll::TypedStorage<4, 4, ::SoundDirection>            mDirection;
    ::ll::TypedStorage<1, 1, bool>                        mIsLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiMessage& operator=(GuiMessage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GuiMessage(::GuiMessage const&);

    MCNAPI GuiMessage(
        ::GuiMessage::MessageType,
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&,
        float,
        bool,
        bool
    );

    MCNAPI std::string const& getAuthorXuid() const;

    MCNAPI ::SoundDirection getDirection() const;

    MCNAPI std::string const getFilteredMessage() const;

    MCNAPI std::string const getFilteredString() const;

    MCNAPI std::string const& getMessage() const;

    MCNAPI std::string const& getString() const;

    MCNAPI std::string const& getTTSMessage() const;

    MCNAPI ::GuiMessage::MessageType getType() const;

    MCNAPI std::string const& getUser() const;

    MCNAPI bool hasBeenSeen() const;

    MCNAPI bool isAlive() const;

    MCNAPI bool isForceVisible() const;

    MCNAPI bool isLocalPlayer() const;

    MCNAPI ::GuiMessage& operator=(::GuiMessage&&);

    MCNAPI void setDuration(float);

    MCNAPI void setHasBeenSeen();

    MCNAPI void setIsLocalPlayer(bool);

    MCNAPI bool wasEverSeen() const;

    MCNAPI ~GuiMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GuiMessage const&);

    MCNAPI void* $ctor(
        ::GuiMessage::MessageType,
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&,
        float,
        bool,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
