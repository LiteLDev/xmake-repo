#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/options/ChatCategory.h"
#include "mc/client/options/Typeface.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace Social::Events { class Property; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ChatOptions {
public:
    // ChatOptions inner types declare
    // clang-format off
    struct ChatOption;
    // clang-format on

    // ChatOptions inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ChatOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Option&>            option;
        ::ll::TypedStorage<1, 1, ::ChatCategory const> category;
        ::ll::TypedStorage<8, 24, std::string const>   telemetryName;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChatOption& operator=(ChatOption const&);
        ChatOption(ChatOption const&);
        ChatOption();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<OptionID, ChatOptions::ChatOption>> mChatOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _registerChatOption(
        std::function<Option&(std::unique_ptr<Option>)> const&,
        std::unique_ptr<Option>,
        ::ChatCategory,
        std::string
    );

    MCNAPI ::Option* get(::OptionID) const;

    MCNAPI bool getEmoteChatEnabled() const;

    MCNAPI int getFontSize() const;

    MCNAPI std::vector<Social::Events::Property> getTelemetryProperties() const;

    MCNAPI ::Typeface getTypeface() const;

    MCNAPI bool isDefault(::ChatCategory) const;

    MCNAPI void reset(::ChatCategory);
    // NOLINTEND
#else // @header-generator platform
    struct ChatOption {};
#endif // @header-generator platform
};
