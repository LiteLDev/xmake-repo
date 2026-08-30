#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectScore : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mObjective;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectScore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextObjectScore();

    virtual std::string asString() const;

    virtual ::Json::Value asJsonValue() const;

    virtual ::Json::Value resolve(::ResolveData const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& RAW_TEXT_SCORE_KEY();

    MCNAPI static std::string const& RAW_TEXT_SCORE_NAME_KEY();

    MCNAPI static std::string const& RAW_TEXT_SCORE_OBJECTIVE_KEY();

    MCNAPI static std::string const& RAW_TEXT_SCORE_STAR();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $asString() const;

    MCNAPI ::Json::Value $asJsonValue() const;

    MCNAPI ::Json::Value $resolve(::ResolveData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
