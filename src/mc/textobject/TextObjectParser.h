#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/server/commands/CommandRegistry.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CommandOrigin;
class Scoreboard;
#else // @header-generator platform
#endif // @header-generator platform
class TextObjectRoot;
namespace Json { class Value; }
// clang-format on

class TextObjectParser {
public:
    // TextObjectParser inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ServerData;
#else // @header-generator platform
#endif // @header-generator platform
    struct ErrorLocalization;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ServerData;
#endif // @header-generator platform
    // clang-format on

    // TextObjectParser inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct ErrorLocalization {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>              mErrorLocalizationString;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mLocalizationParameters;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk789f23;
        ::ll::UntypedStorage<8, 24> mUnk435676;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ErrorLocalization& operator=(ErrorLocalization const&);
        ErrorLocalization(ErrorLocalization const&);
        ErrorLocalization();
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk65f186;
        ::ll::UntypedStorage<8, 8> mUnk50aa87;
        ::ll::UntypedStorage<8, 8> mUnk9a53de;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
        ServerData();
    };

#endif // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _getObjectsFromTextObject(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Json::Value const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData*,
        ::TextObjectParser::ErrorLocalization&
#else // @header-generator platform
        ::Json::Value const&                   root,
        ::TextObjectRoot&                      parsedObject,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
#endif // @header-generator platform
    );

    MCNAPI static bool _textObjectFromJson(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Json::Value const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData*,
        ::TextObjectParser::ErrorLocalization&
#else // @header-generator platform
        ::Json::Value const&                   root,
        ::TextObjectRoot&                      parsedObject,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
#endif // @header-generator platform
    );

    MCNAPI static bool _textObjectFromString(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData*,
        ::TextObjectParser::ErrorLocalization&
#else // @header-generator platform
        ::std::string const&                   jsonAsString,
        ::TextObjectRoot&                      parsedObject,
        ::TextObjectParser::ServerData*        serverData,
        ::TextObjectParser::ErrorLocalization& errorLocalization
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool textObjectFromJson(::Json::Value const&, ::TextObjectRoot&, std::string&);
#else // @header-generator platform
    MCNAPI static bool
    textObjectFromJson(::Json::Value const& root, ::TextObjectRoot& parsedObject, ::std::string& errorMsg);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool textObjectFromJsonServer(
        ::Json::Value const&,
        ::TextObjectRoot&,
        ::TextObjectParser::ServerData,
        ::TextObjectParser::ErrorLocalization&
#else // @header-generator platform
    MCNAPI static bool textObjectFromJsonString(
        ::std::string const& jsonAsString,
        ::TextObjectRoot&    parsedObject,
        ::std::string&       errorMsg
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static bool textObjectFromJsonString(std::string const&, ::TextObjectRoot&, std::string&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_NOT_ARRAY();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_NOT_ARRAY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_NOT_OBJECT();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_NOT_OBJECT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_NO_DATA();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_NO_DATA();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_PARSE_FAILED();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_PARSE_FAILED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_SCORE_NAME_NOT_STRING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_SCORE_NOT_OBJECT();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_SCORE_NOT_OBJECT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_SCORE_OBJECTIVE_NOT_STRING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_SELECTOR_NOT_STRING();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_SELECTOR_NOT_STRING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_TEXT_NOT_STRING();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_TEXT_NOT_STRING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_TRANSLATE_NOT_STRING();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_TRANSLATE_NOT_STRING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT();
#endif // @header-generator platform
    // NOLINTEND
};
