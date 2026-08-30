#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/TextPacketType.h"

// auto generated forward declare list
// clang-format off
class ResolvedTextObject;
class TextPacket;
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

struct TextPacketPayload {
public:
    // TextPacketPayload inner types declare
    // clang-format off
    struct MessageOnly;
    struct AuthorAndMessage;
    struct MessageAndParams;
    // clang-format on

    // TextPacketPayload inner types define
    struct MessageOnly {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
        ::ll::TypedStorage<8, 24, std::string>     mMessage;
        // NOLINTEND
    };

    struct AuthorAndMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
        ::ll::TypedStorage<8, 24, std::string>     mAuthor;
        ::ll::TypedStorage<8, 24, std::string>     mMessage;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::TextPacketPayload::AuthorAndMessage const&) const;
        // NOLINTEND
    };

    struct MessageAndParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType>          mType;
        ::ll::TypedStorage<8, 24, std::string>              mMessage;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mParams;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::TextPacketPayload::MessageAndParams const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mLocalize;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::TypedStorage<8, 24, std::string> mPlatformId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    ::ll::TypedStorage<8, 64, std::variant<TextPacketPayload::MessageOnly, TextPacketPayload::AuthorAndMessage, TextPacketPayload::MessageAndParams>> mBody;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextPacketPayload(::TextPacketPayload const&);

    MCNAPI std::string const& getAuthorOrEmpty() const;

    MCNAPI std::string const& getMessage() const;

    MCNAPI std::vector<std::string> const& getParams() const;

    MCNAPI ::TextPacketType getType() const;

    MCNAPI ::TextPacketPayload& operator=(::TextPacketPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool const _shouldHandleTextPacketForPlayer(
        ::PlayerCapabilities::IPlayerData&,
        ::PlayerCapabilities::ISharedController const&
    );

    MCNAPI static ::TextPacket createAnnouncement(
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&
    );

    MCNAPI static ::TextPacket createChat(
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&
    );

    MCNAPI static ::TextPacket createJukeboxPopup(std::string const&, std::vector<std::string> const&);

    MCNAPI static ::TextPacket createRaw(std::string const&);

    MCNAPI static ::TextPacket createRawJsonObjectMessage(std::string const&);

    MCNAPI static ::TextPacket createSystemMessage(std::string const&);

    MCNAPI static ::TextPacket createTextObjectMessage(::ResolvedTextObject const&, std::string, std::string);

    MCNAPI static ::TextPacket
    createTextObjectWhisperMessage(::ResolvedTextObject const&, std::string const&, std::string const&);

    MCNAPI static ::TextPacket
    createTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);

    MCNAPI static ::TextPacket createTranslated(std::string const&, std::vector<std::string> const&);

    MCNAPI static ::TextPacket
    createTranslatedAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI static ::TextPacket
    createTranslatedChat(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI static ::TextPacket createWhisper(
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextPacketPayload const&);
    // NOLINTEND
};
