#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/TextPacketType.h"

// auto generated forward declare list
// clang-format off
class ResolvedTextObject;
class TextPacket;
#if defined(LL_PLAT_A) // @header-generator platform
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct TextPacketPayload {
public:
    // TextPacketPayload inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct MessageOnly;
#else // @header-generator platform
#endif // @header-generator platform
    struct AuthorAndMessage;
    struct MessageAndParams;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MessageOnly;
#endif // @header-generator platform
    // clang-format on

    // TextPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MessageOnly {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
        ::ll::TypedStorage<8, 24, std::string>     mMessage;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct AuthorAndMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>     mAuthor;
        ::ll::TypedStorage<8, 24, std::string>     mMessage;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>   mAuthor;
        ::ll::TypedStorage<8, 32, ::std::string>   mMessage;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        AuthorAndMessage& operator=(AuthorAndMessage const&) = default;
        AuthorAndMessage(AuthorAndMessage const&)            = default;
        AuthorAndMessage()                                   = default;
        AuthorAndMessage(TextPacketType type, std::string const& author, std::string const& message)
        : mType(type),
          mAuthor(author),
          mMessage(message) {}
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::TextPacketPayload::AuthorAndMessage const&) const;
#else // @header-generator platform
        MCAPI ::TextPacketPayload::AuthorAndMessage& operator=(::TextPacketPayload::AuthorAndMessage&&);
#endif // @header-generator platform
        // NOLINTEND
    };

    struct MessageAndParams {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::TextPacketType>          mType;
        ::ll::TypedStorage<8, 24, std::string>              mMessage;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mParams;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, ::TextPacketType>              mType;
        ::ll::TypedStorage<8, 32, ::std::string>                mMessage;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mParams;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        MessageAndParams(TextPacketType type, std::string const& message, std::vector<std::string> const& params)
        : mType(type),
          mMessage(message),
          mParams(params) {}
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::TextPacketPayload::MessageAndParams const&) const;
#else // @header-generator platform
        MCAPI bool operator==(::TextPacketPayload::MessageAndParams const& other) const;
        // NOLINTEND
    };

    struct MessageOnly {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::TextPacketType> mType;
        ::ll::TypedStorage<8, 32, ::std::string>   mMessage;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mLocalize;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::TypedStorage<8, 24, std::string> mPlatformId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    ::ll::TypedStorage<8, 64, std::variant<TextPacketPayload::MessageOnly, TextPacketPayload::AuthorAndMessage, TextPacketPayload::MessageAndParams>> mBody;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                            mLocalize;
    ::ll::TypedStorage<8, 32, ::std::string>                  mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPlatformId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredMessage;
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::TextPacketPayload::MessageOnly,
            ::TextPacketPayload::AuthorAndMessage,
            ::TextPacketPayload::MessageAndParams>>
        mBody;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TextPacketPayload& operator=(TextPacketPayload const&);
    TextPacketPayload(TextPacketPayload const&);
    TextPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TextPacketPayload(::TextPacketPayload const&);
#else // @header-generator platform
    MCAPI ::TextPacketPayload& operator=(::TextPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getAuthorOrEmpty() const;

    MCNAPI std::string const& getMessage() const;

    MCNAPI std::vector<std::string> const& getParams() const;

    MCNAPI ::TextPacketType getType() const;

    MCNAPI ::TextPacketPayload& operator=(::TextPacketPayload const&);
#else // @header-generator platform
    MCAPI ~TextPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool const _shouldHandleTextPacketForPlayer(
        ::PlayerCapabilities::IPlayerData&,
        ::PlayerCapabilities::ISharedController const&
#else // @header-generator platform
    MCAPI static ::TextPacket createAnnouncement(
        ::std::string const&           author,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           xuid,
        ::std::string const&           platformId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TextPacket createAnnouncement(
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI static ::TextPacket createChat(
        ::std::string const&           author,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           xuid,
        ::std::string const&           platformId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TextPacket createChat(
        std::string const&,
        std::string const&,
        std::optional<std::string> const,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI static ::TextPacket
    createJukeboxPopup(::std::string const& message, ::std::vector<::std::string> const& params);

#ifdef LL_PLAT_C
    MCAPI static ::TextPacket createRaw(::std::string const& raw);
#endif

    MCAPI static ::TextPacket createRawJsonObjectMessage(::std::string const& rawJson);

    MCAPI static ::TextPacket createSystemMessage(::std::string const& message);

    MCAPI static ::TextPacket createTextObjectMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string               fromXuid,
        ::std::string               fromPlatformId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TextPacket createJukeboxPopup(std::string const&, std::vector<std::string> const&);
#else // @header-generator platform
    MCAPI static ::TextPacket createTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TextPacket createRaw(std::string const&);
#else // @header-generator platform
    MCAPI static ::TextPacket createTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TextPacket createRawJsonObjectMessage(std::string const&);
#else // @header-generator platform
    MCAPI static ::TextPacket
    createTranslated(::std::string const& message, ::std::vector<::std::string> const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TextPacket createSystemMessage(std::string const&);
#else // @header-generator platform
    MCAPI static ::TextPacket createTranslatedAnnouncement(
        ::std::string const& author,
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TextPacket createTextObjectMessage(::ResolvedTextObject const&, std::string, std::string);
#else // @header-generator platform
    MCAPI static ::TextPacket createTranslatedChat(
        ::std::string const& author,
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::TextPacket createWhisper(
        ::std::string const&           author,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           xuid,
        ::std::string const&           platformId
#endif // @header-generator platform
    );
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::TextPacketPayload const&);
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
