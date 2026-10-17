#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include <stdexcept>
#include <system_error>

// auto generated inclusion list
#include "mc/deps/nbt/ByteArrayTag.h"
#include "mc/deps/nbt/ByteTag.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/nbt/DoubleTag.h"
#include "mc/deps/nbt/EndTag.h"
#include "mc/deps/nbt/FloatTag.h"
#include "mc/deps/nbt/Int64Tag.h"
#include "mc/deps/nbt/IntArrayTag.h"
#include "mc/deps/nbt/IntTag.h"
#include "mc/deps/nbt/ListTag.h"
#include "mc/deps/nbt/ShortTag.h"
#include "mc/deps/nbt/StringTag.h"

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on

class CompoundTagVariant {
public:
    CompoundTagVariant() { std::construct_at(reinterpret_cast<Variant*>(&mTagStorage)); }
    CompoundTagVariant(CompoundTagVariant const& other) : CompoundTagVariant() { *this = other; }
    CompoundTagVariant(CompoundTagVariant&& other) : CompoundTagVariant() { *this = std::move(other); }
    CompoundTagVariant& operator=(CompoundTagVariant const& other) {
        if (this != &other) {
            auto copy = other.get().copy();
            if (!copy) throw std::runtime_error("failed to copy nbt tag");
            emplace(std::move(*copy));
        }
        return *this;
    }
    CompoundTagVariant& operator=(CompoundTagVariant&& other) {
        if (this != &other) emplace(std::move(other.get()));
        return *this;
    }
    CompoundTagVariant(CompoundTag tag) : CompoundTagVariant() { *this = std::move(tag); }
    CompoundTagVariant(std::initializer_list<CompoundTag::TagMap::value_type> tagPairs)
    : CompoundTagVariant(CompoundTag(tagPairs)) {}
    CompoundTagVariant(std::string value) : CompoundTagVariant() { *this = std::move(value); }
    CompoundTagVariant(std::string_view value) : CompoundTagVariant(std::string(value)) {}
    CompoundTagVariant(float value) : CompoundTagVariant() { assignValue<FloatTag>(Tag::Type::Float, value); }
    CompoundTagVariant(double value) : CompoundTagVariant() { assignValue<DoubleTag>(Tag::Type::Double, value); }
    CompoundTagVariant(std::nullptr_t) : CompoundTagVariant() {}
    template <std::integral T>
    CompoundTagVariant(T value) : CompoundTagVariant() {
        assignInteger(static_cast<int64_t>(value), sizeof(T));
    }
    template <size_t N>
    CompoundTagVariant(char const (&value)[N]) : CompoundTagVariant(std::string_view(value, N - 1)) {}

    CompoundTagVariant& operator=(CompoundTag value) {
        emplace(std::move(value));
        return *this;
    }
    template <class T>
        requires(std::is_arithmetic_v<T> && !std::is_same_v<T, bool>)
    CompoundTagVariant& operator=(T value) {
        return *this = CompoundTagVariant(value);
    }
    // CompoundTagVariant inner types define
    using Variant = std::variant<
        EndTag,
        ByteTag,
        ShortTag,
        IntTag,
        Int64Tag,
        FloatTag,
        DoubleTag,
        ByteArrayTag,
        StringTag,
        ListTag,
        CompoundTag,
        IntArrayTag>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mTagStorage;
    // NOLINTEND

public:
    CompoundTagVariant& operator=(bool value) {
        assignValue<ByteTag>(Tag::Type::Byte, static_cast<uchar>(value));
        return *this;
    }
    CompoundTagVariant& operator=(std::string value) {
        assignValue<StringTag>(Tag::Type::String, std::move(value));
        return *this;
    }
    CompoundTagVariant& operator=(std::string_view value) { return *this = std::string(value); }
    template <size_t N>
    CompoundTagVariant& operator=(char const (&value)[N]) {
        return *this = std::string_view(value, N - 1);
    }
    template <class T>
        requires(
            std::is_arithmetic_v<T> && !std::is_same_v<T, char> && !std::is_same_v<T, wchar_t>
            && !std::is_same_v<T, char8_t> && !std::is_same_v<T, char16_t> && !std::is_same_v<T, char32_t>
        )
    operator T() const {
        static_assert(sizeof(Variant) == 48 && alignof(Variant) == 8);
        return std::visit(
            [](auto const& value) -> T {
                using U = std::decay_t<decltype(value)>;
                if constexpr (std::is_same_v<U, ByteTag>) return static_cast<T>(static_cast<signed char>(value.data));
                else if constexpr (std::is_same_v<U, ShortTag> || std::is_same_v<U, IntTag>
                                   || std::is_same_v<U, Int64Tag> || std::is_same_v<U, FloatTag>
                                   || std::is_same_v<U, DoubleTag>) {
                    return static_cast<T>(value.data);
                } else throw std::runtime_error("tag not hold an number");
            },
            mTagStorage.as<Variant>()
        );
    }
    operator std::string const&() const { return get<StringTag>().data; }
    operator std::string&() { return get<StringTag>().data; }
    operator std::string_view() const { return get<StringTag>().data; }

    [[nodiscard]] Tag::Type index() const noexcept { return static_cast<Tag::Type>(mTagStorage.as<Variant>().index()); }
    [[nodiscard]] Tag::Type getId() const noexcept { return index(); }
    template <std::derived_from<Tag> T>
    [[nodiscard]] bool hold() const noexcept {
        return std::holds_alternative<T>(mTagStorage.as<Variant>());
    }
    [[nodiscard]] bool hold(Tag::Type type) const noexcept { return getId() == type; }
    [[nodiscard]] bool is_array() const noexcept { return hold(Tag::Type::List); }
    [[nodiscard]] bool is_binary() const noexcept { return hold(Tag::Type::ByteArray) || hold(Tag::Type::IntArray); }
    [[nodiscard]] bool is_boolean() const noexcept { return hold(Tag::Type::Byte); }
    [[nodiscard]] bool is_null() const noexcept { return hold(Tag::Type::End); }
    [[nodiscard]] bool is_number_float() const noexcept { return hold(Tag::Type::Float) || hold(Tag::Type::Double); }
    [[nodiscard]] bool is_number_integer() const noexcept {
        return hold(Tag::Type::Byte) || hold(Tag::Type::Short) || hold(Tag::Type::Int) || hold(Tag::Type::Int64);
    }
    [[nodiscard]] bool is_object() const noexcept { return hold(Tag::Type::Compound); }
    [[nodiscard]] bool is_string() const noexcept { return hold(Tag::Type::String); }
    [[nodiscard]] bool is_number() const noexcept { return is_number_float() || is_number_integer(); }
    [[nodiscard]] bool is_primitive() const noexcept { return is_null() || is_string() || is_number() || is_binary(); }
    [[nodiscard]] bool is_structured() const noexcept { return is_array() || is_object(); }

    template <std::derived_from<Tag> T>
    [[nodiscard]] T& get() {
        return std::get<T>(mTagStorage.as<Variant>());
    }
    template <std::derived_from<Tag> T>
    [[nodiscard]] T const& get() const {
        return std::get<T>(mTagStorage.as<Variant>());
    }
    [[nodiscard]] Tag& get() {
        return std::visit([](auto& tag) -> Tag& { return tag; }, mTagStorage.as<Variant>());
    }
    [[nodiscard]] Tag const& get() const {
        return std::visit([](auto const& tag) -> Tag const& { return tag; }, mTagStorage.as<Variant>());
    }
    [[nodiscard]] bool contains(std::string_view key) const noexcept {
        return is_object() && get<CompoundTag>().contains(key);
    }
    [[nodiscard]] bool contains(std::string_view key, Tag::Type type) const noexcept {
        return is_object() && get<CompoundTag>().contains(key, type);
    }
    [[nodiscard]] CompoundTagVariant& operator[](std::string_view key) {
        if (is_null()) *this = CompoundTag{};
        if (!is_object()) throw std::runtime_error("tag not hold an object");
        return get<CompoundTag>()[key];
    }
    [[nodiscard]] CompoundTagVariant const& operator[](std::string_view key) const {
        if (!is_object()) throw std::runtime_error("tag not hold an object");
        return get<CompoundTag>()[key];
    }
    template <size_t N>
    [[nodiscard]] CompoundTagVariant& operator[](char const (&key)[N]) {
        return operator[](std::string_view(key, N - 1));
    }
    template <size_t N>
    [[nodiscard]] CompoundTagVariant const& operator[](char const (&key)[N]) const {
        return operator[](std::string_view(key, N - 1));
    }
    static CompoundTagVariant object(std::initializer_list<CompoundTag::TagMap::value_type> init = {}) {
        return CompoundTagVariant(CompoundTag(init));
    }

private:
    template <class T, class V>
    void assignValue(Tag::Type type, V value) {
        auto tag = Tag::newTag(type);
        if (!tag) throw std::system_error(tag.error().code());
        static_cast<T&>(**tag).data = std::move(value);
        emplace(std::move(**tag));
    }
    void assignInteger(int64_t value, size_t size) {
        switch (size) {
        case 1:
            assignValue<ByteTag>(Tag::Type::Byte, static_cast<uchar>(value));
            break;
        case 2:
            assignValue<ShortTag>(Tag::Type::Short, static_cast<short>(value));
            break;
        case 4:
            assignValue<IntTag>(Tag::Type::Int, static_cast<int>(value));
            break;
        default:
            assignValue<Int64Tag>(Tag::Type::Int64, value);
            break;
        }
    }

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Tag& emplace(::Tag&&);

    ~CompoundTagVariant() {
        // Some native complete destructors are folded; use the real value's virtual slot.
        if (!mTagStorage.as<Variant>().valueless_by_exception()) get().~Tag();
    }
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

inline CompoundTag::CompoundTag() { std::construct_at(reinterpret_cast<TagMap*>(&mTags)); }
inline CompoundTag::CompoundTag(TagMap tags) { std::construct_at(reinterpret_cast<TagMap*>(&mTags), std::move(tags)); }
inline CompoundTag::CompoundTag(std::initializer_list<TagMap::value_type> tags) : CompoundTag(TagMap(tags)) {}
inline CompoundTag::CompoundTag(CompoundTag const& other) : CompoundTag(other.mTags.as<TagMap>()) {}
inline CompoundTag::CompoundTag(CompoundTag&& other) : CompoundTag(std::move(other.mTags.as<TagMap>())) {}
inline CompoundTag::~CompoundTag() { std::destroy_at(&mTags.as<TagMap>()); }
inline CompoundTag& CompoundTag::operator=(CompoundTag const& other) {
    mTags.as<TagMap>() = other.mTags.as<TagMap>();
    return *this;
}
inline CompoundTag& CompoundTag::operator=(CompoundTag&& other) {
    if (this != &other) mTags.as<TagMap>() = std::move(other.mTags.as<TagMap>());
    return *this;
}
inline CompoundTagVariant& CompoundTag::operator[](std::string_view key) {
    auto& values = mTags.as<TagMap>();
    if (auto found = values.find(key); found != values.end()) return found->second;
    return values[std::string(key)];
}
inline CompoundTagVariant const& CompoundTag::operator[](std::string_view key) const {
    auto const& values = mTags.as<TagMap>();
    if (auto found = values.find(key); found != values.end()) return found->second;
    throw std::out_of_range("invalid nbt key");
}
