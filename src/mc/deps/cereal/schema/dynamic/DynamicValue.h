#pragma once
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

#include <concepts>
#include <initializer_list>
#endif // @header-generator platform

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/external/cereal/StringViewHash.h"
#endif // @header-generator platform

namespace cereal {

class DynamicValue {
public:
    // DynamicValue inner types define
    enum class Type : int {
#if defined(LL_PLAT_A) // @header-generator platform
        null    = 0,
        boolean = 1,
        integer = 2,
        number  = 3,
        string  = 4,
        array   = 5,
        object  = 6,
#else // @header-generator platform
        Null    = 0,
        Boolean = 1,
        Integer = 2,
        Number  = 3,
        String  = 4,
        Array   = 5,
        Object  = 6,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Variant = std::variant<
        cereal::NullType,
        bool,
        long,
        double,
        std::string,
        std::vector<cereal::DynamicValue>,
        std::unordered_map<std::string, cereal::DynamicValue>>;
#else // @header-generator platform
    using Array = ::std::vector<::cereal::DynamicValue>;
#endif // @header-generator platform

    using Bool = bool;

#if defined(LL_PLAT_A) // @header-generator platform
    using Integer = long;
#else // @header-generator platform
    using Integer = int64;

    using Null = ::cereal::NullType;
#endif // @header-generator platform

    using Number = double;

#if defined(LL_PLAT_A) // @header-generator platform
    using String = std::string;
#else // @header-generator platform
    using String = ::std::string;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Object = std::unordered_map<std::string, cereal::DynamicValue>;
#else // @header-generator platform
    using Object = ::std::
        unordered_map<String, ::cereal::DynamicValue, ::cereal::util::internal::StringViewHash, ::std::equal_to<void>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Array = std::vector<cereal::DynamicValue>;
#else // @header-generator platform
    using Member = ::std::pair<::std::string, ::cereal::DynamicValue>;

    using Variant = ::std::variant<::cereal::NullType, bool, int64, double, ::std::string, Array, Object>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mValue;
#else // @header-generator platform
    Variant mValue;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<cereal::DynamicValue> const& asArray() const;
#else // @header-generator platform
    DynamicValue() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<cereal::DynamicValue>& asArray();
#else // @header-generator platform
    DynamicValue(::std::nullptr_t) noexcept : mValue(Null{}) {}
    DynamicValue(Null) noexcept : mValue(Null{}) {}
    DynamicValue(Bool value) noexcept : mValue(value) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool const& asBool() const;
#else // @header-generator platform
    template <::std::integral T>
        requires(!::std::same_as<::std::remove_cvref_t<T>, Bool>)
    DynamicValue(T value) noexcept : mValue(static_cast<Integer>(value)) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long const& asInteger() const;
#else // @header-generator platform
    template <::std::floating_point T>
    DynamicValue(T value) noexcept : mValue(static_cast<Number>(value)) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI double const& asNumber() const;
#else // @header-generator platform
    DynamicValue(char const* value) : mValue(String{value == nullptr ? "" : value}) {}
    DynamicValue(::std::string_view value) : mValue(String{value}) {}
    DynamicValue(String value) : mValue(::std::move(value)) {}
    DynamicValue(Array value) : mValue(::std::move(value)) {}
    DynamicValue(Object value) : mValue(::std::move(value)) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, cereal::DynamicValue> const& asObject() const;
#else // @header-generator platform
    DynamicValue(DynamicValue const&)            = default;
    DynamicValue(DynamicValue&&)                 = default;
    DynamicValue& operator=(DynamicValue const&) = default;
    DynamicValue& operator=(DynamicValue&&)      = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, cereal::DynamicValue>& asObject();
#else // @header-generator platform
    template <class T>
        requires(!::std::same_as<::std::remove_cvref_t<T>, DynamicValue> && ::std::constructible_from<DynamicValue, T>)
    DynamicValue& operator=(T&& value) {
        return *this = DynamicValue(::std::forward<T>(value));
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& asString() const;
#else // @header-generator platform
    [[nodiscard]] static DynamicValue array() { return Array{}; }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string& asString();
#else // @header-generator platform
    [[nodiscard]] static DynamicValue array(::std::initializer_list<DynamicValue> values) { return Array{values}; }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasMember(std::string const&) const;
#else // @header-generator platform
    [[nodiscard]] static DynamicValue object() { return Object{}; }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong hash() const;
#else // @header-generator platform
    [[nodiscard]] static DynamicValue object(::std::initializer_list<Member> members) {
        Object result;
        result.reserve(members.size());
        for (auto const& [name, value] : members) {
            result.insert_or_assign(name, value);
        }
        return result;
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::cereal::DynamicValue const&) const;
#else // @header-generator platform
    [[nodiscard]] Variant const& value() const& noexcept { return mValue; }
    [[nodiscard]] Variant&       value() & noexcept { return mValue; }
    [[nodiscard]] Variant&&      value() && noexcept { return ::std::move(mValue); }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::DynamicValue const& operator[](std::string const&) const;
#else // @header-generator platform
    template <class T>
    [[nodiscard]] bool is() const noexcept {
        return ::std::holds_alternative<T>(value());
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::DynamicValue& operator[](std::string const&);
#else // @header-generator platform
    template <class T>
    [[nodiscard]] T const& get() const& {
        return ::std::get<T>(value());
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::DynamicValue::Type type() const;
#else // @header-generator platform
    template <class T>
    [[nodiscard]] T& get() & {
        return ::std::get<T>(value());
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DynamicValue();
    // NOLINTEND
#else // @header-generator platform
    template <class T>
    [[nodiscard]] T&& get() && {
        return ::std::get<T>(::std::move(*this).value());
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    template <class T>
    [[nodiscard]] T const* getIf() const noexcept {
        return ::std::get_if<T>(&value());
    }

    template <class T>
    [[nodiscard]] T* getIf() noexcept {
        return ::std::get_if<T>(&value());
    }

    [[nodiscard]] bool isNull() const noexcept { return is<Null>(); }
    [[nodiscard]] bool isBool() const noexcept { return is<Bool>(); }
    [[nodiscard]] bool isInteger() const noexcept { return is<Integer>(); }
    [[nodiscard]] bool isNumber() const noexcept { return is<Number>(); }
    [[nodiscard]] bool isString() const noexcept { return is<String>(); }
    [[nodiscard]] bool isArray() const noexcept { return is<Array>(); }
    [[nodiscard]] bool isObject() const noexcept { return is<Object>(); }
    [[nodiscard]] bool isNumeric() const noexcept { return isInteger() || isNumber(); }
    [[nodiscard]] bool isPrimitive() const noexcept { return !isArray() && !isObject(); }

    [[nodiscard]] Type type() const noexcept { return static_cast<Type>(value().index()); }

    [[nodiscard]] Null const&    asNull() const { return get<Null>(); }
    [[nodiscard]] Null&          asNull() { return get<Null>(); }
    [[nodiscard]] Bool const&    asBool() const { return get<Bool>(); }
    [[nodiscard]] Bool&          asBool() { return get<Bool>(); }
    [[nodiscard]] Integer const& asInteger() const { return get<Integer>(); }
    [[nodiscard]] Integer&       asInteger() { return get<Integer>(); }
    [[nodiscard]] Number const&  asNumber() const { return get<Number>(); }
    [[nodiscard]] Number&        asNumber() { return get<Number>(); }
    [[nodiscard]] String const&  asString() const { return get<String>(); }
    [[nodiscard]] String&        asString() { return get<String>(); }
    [[nodiscard]] Array const&   asArray() const { return get<Array>(); }
    [[nodiscard]] Array&         asArray() { return get<Array>(); }
    [[nodiscard]] Object const&  asObject() const { return get<Object>(); }
    [[nodiscard]] Object&        asObject() { return get<Object>(); }

    [[nodiscard]] bool contains(::std::string_view member) const {
        if (!isObject()) {
            return false;
        }
        return get<Object>().contains(member);
    }

    [[nodiscard]] ::std::size_t size() const noexcept {
        if (auto const* values = ::std::get_if<Array>(&value())) {
            return values->size();
        }
        if (auto const* members = ::std::get_if<Object>(&value())) {
            return members->size();
        }
        return isNull() ? 0 : 1;
    }

    [[nodiscard]] bool empty() const noexcept { return size() == 0; }

    [[nodiscard]] bool hasMember(::std::string_view member) const { return contains(member); }

    DynamicValue& operator[](::std::string_view member) {
        if (isNull()) {
            mValue = Object{};
        }
        auto& values = get<Object>();
        if (auto iter = values.find(member); iter != values.end()) {
            return iter->second;
        }
        return values.try_emplace(String{member}).first->second;
    }

    DynamicValue const& operator[](::std::string_view member) const {
        auto const& values = get<Object>();
        auto        iter   = values.find(member);
        if (iter == values.end()) {
            throw ::std::out_of_range("DynamicValue object key not found");
        }
        return iter->second;
    }

    DynamicValue& operator[](::std::size_t index) { return get<Array>().at(index); }

    DynamicValue const& operator[](::std::size_t index) const { return get<Array>().at(index); }

    DynamicValue& at(::std::string_view member) { return const_cast<DynamicValue&>(::std::as_const(*this).at(member)); }

    DynamicValue const& at(::std::string_view member) const { return operator[](member); }

    DynamicValue& at(::std::size_t index) { return get<Array>().at(index); }

    DynamicValue const& at(::std::size_t index) const { return get<Array>().at(index); }

    template <class T>
        requires ::std::constructible_from<DynamicValue, T>
    DynamicValue& set(::std::string_view member, T&& field) {
        (*this)[member] = DynamicValue(::std::forward<T>(field));
        return *this;
    }

    DynamicValue& pushBack(DynamicValue element) {
        if (isNull()) {
            mValue = Array{};
        }
        get<Array>().emplace_back(::std::move(element));
        return *this;
    }

    DynamicValue& push_back(DynamicValue element) { return pushBack(::std::move(element)); }

    template <class T>
        requires ::std::constructible_from<DynamicValue, T>
    DynamicValue& emplaceBack(T&& element) {
        return pushBack(DynamicValue(::std::forward<T>(element)));
    }

    template <class T>
        requires ::std::constructible_from<DynamicValue, T>
    DynamicValue& emplace_back(T&& element) {
        return emplaceBack(::std::forward<T>(element));
    }

    bool erase(::std::string_view member) {
        if (!isObject()) {
            return false;
        }
        auto& values = get<Object>();
        auto  iter   = values.find(member);
        if (iter == values.end()) {
            return false;
        }
        values.erase(iter);
        return true;
    }

    void erase(::std::size_t index) {
        auto& values = get<Array>();
        if (index >= values.size()) {
            throw ::std::out_of_range("DynamicValue array index out of range");
        }
        values.erase(values.begin() + static_cast<::std::ptrdiff_t>(index));
    }

    void clear() {
        if (auto* values = getIf<Array>()) {
            values->clear();
        } else if (auto* members = getIf<Object>()) {
            members->clear();
        } else if (auto* text = getIf<String>()) {
            text->clear();
        } else {
            *this = nullptr;
        }
    }

    void reserve(::std::size_t capacity) {
        if (auto* values = getIf<Array>()) {
            values->reserve(capacity);
        } else {
            get<Object>().reserve(capacity);
        }
    }

    MCAPI uint64 hash() const;
#endif // @header-generator platform
    // NOLINTEND
};

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
[[nodiscard]] inline bool operator==(DynamicValue const& lhs, DynamicValue const& rhs) {
    return lhs.value() == rhs.value();
}

#endif // @header-generator platform
} // namespace cereal
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {

template <>
struct hash<::cereal::DynamicValue> {
    [[nodiscard]] ::std::size_t operator()(::cereal::DynamicValue const& value) const {
        return static_cast<::std::size_t>(value.hash());
    }
};

} // namespace std
#endif // @header-generator platform
