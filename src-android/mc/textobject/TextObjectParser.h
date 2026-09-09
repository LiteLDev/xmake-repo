#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandRegistry.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class Scoreboard;
class TextObjectRoot;
namespace Json { class Value; }
// clang-format on

class TextObjectParser {
public:
    // TextObjectParser inner types declare
    // clang-format off
    struct ServerData;
    struct ErrorLocalization;
    // clang-format on

    // TextObjectParser inner types define
    struct ServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                                            mParser;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const CommandOrigin*> const> mCommandOrigin;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Scoreboard*> const>    mScoreboard;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ServerData(::CommandRegistry::Parser&, ::CommandOrigin const&, ::Scoreboard const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CommandRegistry::Parser&, ::CommandOrigin const&, ::Scoreboard const&);
        // NOLINTEND
    };

    struct ErrorLocalization {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>              mErrorLocalizationString;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mLocalizationParameters;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ErrorLocalization();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _getObjectsFromTextObject(
        ::Json::Value const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData*,
        ::TextObjectParser::ErrorLocalization&
    );

    MCNAPI static bool _textObjectFromJson(
        ::Json::Value const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData*,
        ::TextObjectParser::ErrorLocalization&
    );

    MCNAPI static bool _textObjectFromString(
        std::string const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData*,
        ::TextObjectParser::ErrorLocalization&
    );

    MCNAPI static bool textObjectFromJson(::Json::Value const&, ::TextObjectRoot&, std::string&);

    MCNAPI static bool textObjectFromJsonServer(
        ::Json::Value const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData,
        ::TextObjectParser::ErrorLocalization&
    );

    MCNAPI static bool textObjectFromJsonString(std::string const&, ::TextObjectRoot&, std::string&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& RAW_TEXT_ERROR_NOT_ARRAY();

    MCNAPI static std::string const& RAW_TEXT_ERROR_NOT_OBJECT();

    MCNAPI static std::string const& RAW_TEXT_ERROR_NO_DATA();

    MCNAPI static std::string const& RAW_TEXT_ERROR_PARSE_FAILED();

    MCNAPI static std::string const& RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING();

    MCNAPI static std::string const& RAW_TEXT_ERROR_SCORE_NOT_OBJECT();

    MCNAPI static std::string const& RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING();

    MCNAPI static std::string const& RAW_TEXT_ERROR_SELECTOR_NOT_STRING();

    MCNAPI static std::string const& RAW_TEXT_ERROR_TEXT_NOT_STRING();

    MCNAPI static std::string const& RAW_TEXT_ERROR_TRANSLATE_NOT_STRING();

    MCNAPI static std::string const& RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT();
    // NOLINTEND
};
