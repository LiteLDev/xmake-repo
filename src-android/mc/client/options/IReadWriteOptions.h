#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class IReadWriteOptions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IReadWriteOptions() = default;

    virtual bool getBool(::OptionID) const = 0;

    virtual void setBool(::OptionID, bool) = 0;

    virtual float getFloat(::OptionID) const = 0;

    virtual void setFloat(::OptionID, float) = 0;

    virtual int getInt(::OptionID) const = 0;

    virtual void setInt(::OptionID, int) = 0;

    virtual ::Bedrock::PubSub::Subscription _registerObserver(::OptionID, std::function<void(int)>) = 0;

    virtual ::Bedrock::PubSub::Subscription _registerObserver(::OptionID, std::function<void(float)>) = 0;

    virtual ::Bedrock::PubSub::Subscription _registerObserver(::OptionID, std::function<void(bool)>) = 0;
    // NOLINTEND
};
