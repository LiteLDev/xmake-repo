#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/IReadWriteOptions.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class ConstOptionIterator;
class Option;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ReadWriteOptionRegistry : public ::IReadWriteOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 6600, std::array<std::unique_ptr<Option>, 825>> mOptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReadWriteOptionRegistry();

    virtual bool getBool(::OptionID) const;

    virtual void setBool(::OptionID, bool);

    virtual float getFloat(::OptionID) const;

    virtual void setFloat(::OptionID, float);

    virtual int getInt(::OptionID) const;

    virtual void setInt(::OptionID, int);

    virtual ::Bedrock::PubSub::Subscription _registerObserver(::OptionID, std::function<void(int)>);

    virtual ::Bedrock::PubSub::Subscription _registerObserver(::OptionID, std::function<void(float)>);

    virtual ::Bedrock::PubSub::Subscription _registerObserver(::OptionID, std::function<void(bool)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $getBool(::OptionID) const;

    MCNAPI void $setBool(::OptionID, bool);

    MCNAPI float $getFloat(::OptionID) const;

    MCNAPI void $setFloat(::OptionID, float);

    MCNAPI int $getInt(::OptionID) const;

    MCNAPI void $setInt(::OptionID, int);

    MCNAPI ::Bedrock::PubSub::Subscription $_registerObserver(::OptionID, std::function<void(int)>);

    MCNAPI ::Bedrock::PubSub::Subscription $_registerObserver(::OptionID, std::function<void(float)>);

    MCNAPI ::Bedrock::PubSub::Subscription $_registerObserver(::OptionID, std::function<void(bool)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
