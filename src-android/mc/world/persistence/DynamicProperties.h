#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct DynamicPropertyDefinition;
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicProperties {
public:
    // DynamicProperties inner types declare
    // clang-format off
    struct PropertyCollection;
    // clang-format on

    // DynamicProperties inner types define
    struct PropertyCollection {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> mByteCount;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::variant<double, float, bool, std::string, Vec3>>> mProperties;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PropertyCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using PropertyVariant = std::variant<double, float, bool, std::string, Vec3>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DynamicProperties::PropertyCollection>> mPropertyCollections;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearCollection(std::string const&);

    MCNAPI void deserialize(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    MCNAPI ulong getCollectionCount() const;

    MCNAPI std::variant<double, float, bool, std::string, Vec3> const*
           getDynamicProperty(std::string const&, std::string const&) const;

    MCNAPI std::vector<std::string> getDynamicPropertyIds(std::string const&) const;

    MCNAPI ulong getPropertyCount(std::string const&) const;

    MCNAPI ulong getTotalByteCount(std::string const&) const;

    MCNAPI bool removeDynamicProperty(std::string const&, std::string const&);

    MCNAPI std::unique_ptr<CompoundTag> serialize(::cereal::ReflectionCtx const&) const;

    MCNAPI void setDynamicProperty(
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const&,
        std::string const&
    );

    MCNAPI void updateCollectionName(std::string const&, std::string const&);

    MCNAPI ~DynamicProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static std::optional<Scripting::ArgumentOutOfBoundsError>
    validateDynamicProperty(std::string const&, std::variant<double, float, bool, std::string, Vec3> const*);

    MCNAPI static std::string validateDynamicProperty_V010(
        ::DynamicPropertyDefinition const*,
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const*
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& STORAGE_TAG();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
