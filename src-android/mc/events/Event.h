#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/CompoundMeasurement.h"
#include "mc/events/Measurements.h"
#include "mc/events/Properties.h"
#include "mc/events/Property.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Json { class Value; }
namespace Social::Events { class Measurement; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Social::Events {

class Event {
public:
    // Event inner types define
    enum class AggregationMode : int {
        None                        = 0,
        Aggregate                   = 1,
        AggregateByUniqueProperties = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mUserId;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, ::Social::Events::Event::AggregationMode> mAggregationMode;
    ::ll::TypedStorage<4, 4, uint> mCustomAggregationTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mAggregationStartTime;
    ::ll::TypedStorage<8, 8, long> mTimestamp;
    ::ll::TypedStorage<4, 4, int> mEventTags;
    ::ll::UntypedStorage<8, 48> mDynamicProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Events::Property>> mCommonProperties;
    ::ll::TypedStorage<8, 24, ::Social::Events::Properties> mUniqueProperties;
    ::ll::TypedStorage<8, 24, ::Social::Events::Measurements> mMeasurements;
    ::ll::UntypedStorage<8, 48> mCompoundMeasurements;
    ::ll::TypedStorage<1, 1, bool> mRecordStamped;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Event(::Social::Events::Event const&);

    MCNAPI Event(uint, std::string const&, std::unordered_map<std::string, Social::Events::Property>&&, int);

    MCNAPI void _addOrUpdateCompoundMeasurement(std::string const&, ::Social::Events::CompoundMeasurement&&);

    MCNAPI void addMeasurement(::Social::Events::Measurement const&);

    MCNAPI void addProperty(::Social::Events::Property const&, bool);

    MCNAPI void forEachProperty(::brstd::function_ref<void(const Social::Events::Property&)>) const;

    MCNAPI ::brstd::flat_map<
        std::string,
        std::vector<Social::Events::Property>,
        std::less<std::string>,
        std::vector<std::string>,
        std::vector<std::vector<Social::Events::Property>>>
    getCompoundsAsDynamicProperties() const;

    MCNAPI std::optional<std::reference_wrapper<const Social::Events::Property>> getProperty(std::string const&) const;

    MCNAPI uint getUserId() const;

    MCNAPI bool hasEventTags(int) const;

    MCNAPI bool hasMeasurements() const;

    MCNAPI ::Json::Value measurementsAsJsonValue() const;

    MCNAPI bool passesFilter(int) const;

    MCNAPI ::Json::Value propertiesAsJsonValue() const;

    MCNAPI ~Event();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::Event const&);

    MCNAPI void* $ctor(uint, std::string const&, std::unordered_map<std::string, Social::Events::Property>&&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
