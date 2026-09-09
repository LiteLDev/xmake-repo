#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ResolvedTextObject;
class Scoreboard;
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectRoot : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ITextObject>>> mChildren;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextObjectRoot();

    virtual std::string asString() const;

    virtual ::Json::Value asJsonValue() const;

    virtual ::Json::Value resolve(::ResolveData const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addChild(std::unique_ptr<ITextObject>);

    MCNAPI void clear();

    MCNAPI bool isEmpty() const;

    MCNAPI ::ResolvedTextObject resolveRoot(::Actor const&, ::Scoreboard const&) const;
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
