#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#include <stdexcept>
#include <system_error>
#else // @header-generator platform
#include "ll/api/Expected.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/Meta.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // CompoundTagVariant inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    using Types = ::ll::meta::TypeList<
        ::EndTag,
        ::ByteTag,
        ::ShortTag,
        ::IntTag,
        ::Int64Tag,
        ::FloatTag,
        ::DoubleTag,
        ::ByteArrayTag,
        ::StringTag,
        ::ListTag,
        ::CompoundTag,
        ::IntArrayTag>;

    using Variant = Types::to<::std::variant>;

    template <bool Const>
    class Iterator {
    public:
        using iterator_category = std::bidirectional_iterator_tag;
        using difference_type   = ptrdiff_t;
        using value_type        = Tag;
        using reference         = std::conditional_t<Const, value_type const, value_type>&;
        using pointer           = std::add_pointer_t<reference>;

        std::conditional_t<
            Const,
            std::variant<CompoundTagVariant const*, CompoundTag::const_iterator, ListTag::const_iterator>,
            std::variant<CompoundTagVariant*, CompoundTag::iterator, ListTag::iterator>>
            iter;

        static Iterator makeBegin(auto& var) noexcept {
            Iterator res;
            switch (var.index()) {
            case Tag::List:
                res.iter.template emplace<2>(var.template get<ListTag>().begin());
                break;
            case Tag::Compound:
                res.iter.template emplace<1>(var.template get<CompoundTag>().begin());
                break;
            case Tag::End:
                res.iter.template emplace<0>(std::addressof(var) + 1);
                break;
            default:
                res.iter.template emplace<0>(std::addressof(var));
            }
            return res;
        }

        static Iterator makeEnd(auto& var) noexcept {
            Iterator res;
            switch (var.index()) {
            case Tag::List:
                res.iter.template emplace<2>(var.template get<ListTag>().end());
                break;
            case Tag::Compound:
                res.iter.template emplace<1>(var.template get<CompoundTag>().end());
                break;
            default:
                res.iter.template emplace<0>(std::addressof(var) + 1);
            }
            return res;
        }

        [[nodiscard]] reference operator*() const noexcept {
            switch (iter.index()) {
            case 0:
                return std::get<0>(iter)->get();
            case 1:
                return std::get<1>(iter)->second.get();
            case 2:
                return *std::get<2>(iter)->get();
            default:
                LL_UNREACHABLE;
            }
            LL_UNREACHABLE;
        }

        [[nodiscard]] pointer operator->() const noexcept { return std::addressof(**this); }

        Iterator& operator++() noexcept {
            std::visit([](auto& val) { ++val; }, iter);
            return *this;
        }

        Iterator operator++(int) noexcept {
            Iterator tmp = *this;
            ++*this;
            return tmp;
        }

        Iterator& operator--() noexcept {
            std::visit([](auto& val) { --val; }, iter);
            return *this;
        }

        Iterator operator--(int) noexcept {
            Iterator tmp = *this;
            --*this;
            return tmp;
        }

        [[nodiscard]] bool operator==(Iterator const& r) const noexcept { return this->iter == r.iter; }
    };

    using iterator       = Iterator<false>;
    using const_iterator = Iterator<true>;
#endif // @header-generator platform

public:
    // member variables
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mTagStorage;
    // NOLINTEND
#else // @header-generator platform
    Variant mTagStorage;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    CompoundTagVariant& operator=(bool value) {
        assignValue<ByteTag>(Tag::Type::Byte, static_cast<uchar>(value));
#else // @header-generator platform
    LLNDAPI static ll::Expected<CompoundTagVariant>
    parse(std::string_view snbt, optional_ref<size_t> parsedLength = std::nullopt) noexcept;

    [[nodiscard]] constexpr CompoundTagVariant() = default;

    [[nodiscard]] constexpr CompoundTagVariant(CompoundTagVariant&&) = default;

    LL_MAY_CONSTEXPR CompoundTagVariant& operator=(CompoundTagVariant&&) = default;

    [[nodiscard]] constexpr CompoundTagVariant(CompoundTagVariant const&) = default;

    LL_MAY_CONSTEXPR CompoundTagVariant& operator=(CompoundTagVariant const&) = default;

    template <class T>
        requires(requires(T o) { mTagStorage = std::move(o); })
    constexpr CompoundTagVariant& operator=(T other) {
        mTagStorage = std::move(other);
#endif // @header-generator platform
        return *this;
    }
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    [[nodiscard]] Tag::Type index() const noexcept { return static_cast<Tag::Type>(mTagStorage.as<Variant>().index()); }
    [[nodiscard]] Tag::Type getId() const noexcept { return index(); }
    template <std::derived_from<Tag> T>
    [[nodiscard]] bool hold() const noexcept {
        return std::holds_alternative<T>(mTagStorage.as<Variant>());
#else // @header-generator platform
    [[nodiscard]] constexpr CompoundTagVariant(std::nullptr_t) {}

    [[nodiscard]] bool operator==(CompoundTagVariant const& other) const { return get() == other.get(); }

    [[nodiscard]] CompoundTagVariant(Variant tag) : mTagStorage(std::move(tag)) {}

    template <class T, class... Args>
    [[nodiscard]] constexpr CompoundTagVariant(std::in_place_type_t<T>, Args&&... args)
    : mTagStorage(std::in_place_type<T>, std::forward<Args>(args)...) {}

    [[nodiscard]] constexpr CompoundTagVariant(std::initializer_list<CompoundTag::TagMap::value_type> tagPairs)
    : mTagStorage(std::in_place_type<CompoundTag>, tagPairs) {}

    [[nodiscard]] CompoundTagVariant(UniqueTagPtr&& tag) {
        if (!tag) {
            return;
        }
        ::ll::meta::visitIndex<Types::size>(static_cast<size_t>(tag->getId()), [&]<size_t I> {
            mTagStorage = std::move((Types::get<I>&)*tag);
        });
#endif // @header-generator platform
    }
#if defined(LL_PLAT_A) // @header-generator platform
    [[nodiscard]] bool hold(Tag::Type type) const noexcept { return getId() == type; }
    [[nodiscard]] bool is_array() const noexcept { return hold(Tag::Type::List); }
    [[nodiscard]] bool is_binary() const noexcept { return hold(Tag::Type::ByteArray) || hold(Tag::Type::IntArray); }
    [[nodiscard]] bool is_boolean() const noexcept { return hold(Tag::Type::Byte); }
    [[nodiscard]] bool is_null() const noexcept { return hold(Tag::Type::End); }
    [[nodiscard]] bool is_number_float() const noexcept { return hold(Tag::Type::Float) || hold(Tag::Type::Double); }
    [[nodiscard]] bool is_number_integer() const noexcept {
        return hold(Tag::Type::Byte) || hold(Tag::Type::Short) || hold(Tag::Type::Int) || hold(Tag::Type::Int64);
#else // @header-generator platform
    [[nodiscard]] CompoundTagVariant(UniqueTagPtr const& tag) : CompoundTagVariant(tag ? tag->copy() : nullptr) {}
    template <std::derived_from<Tag> T>
    [[nodiscard]] constexpr CompoundTagVariant(T tag) : mTagStorage(std::move(tag)) {}
    template <std::integral T>
    [[nodiscard]] constexpr CompoundTagVariant(T integer) {
        constexpr size_t size = sizeof(T);
        if constexpr (size == 1) {
            mTagStorage = ByteTag{integer};
        } else if constexpr (size == 2) {
            mTagStorage = ShortTag{integer};
        } else if constexpr (size == 4) {
            mTagStorage = IntTag{integer};
        } else {
            mTagStorage = Int64Tag{integer};
        }
#endif // @header-generator platform
    }
#if defined(LL_PLAT_A) // @header-generator platform
    [[nodiscard]] bool is_object() const noexcept { return hold(Tag::Type::Compound); }
    [[nodiscard]] bool is_string() const noexcept { return hold(Tag::Type::String); }
    [[nodiscard]] bool is_number() const noexcept { return is_number_float() || is_number_integer(); }
    [[nodiscard]] bool is_primitive() const noexcept { return is_null() || is_string() || is_number() || is_binary(); }
    [[nodiscard]] bool is_structured() const noexcept { return is_array() || is_object(); }
#else // @header-generator platform
    [[nodiscard]] CompoundTagVariant(std::byte b) : mTagStorage(ByteTag{b}) {}

    [[nodiscard]] CompoundTagVariant(float f) : mTagStorage(FloatTag{f}) {}

    [[nodiscard]] CompoundTagVariant(double d) : mTagStorage(DoubleTag{d}) {}

    [[nodiscard]] constexpr CompoundTagVariant(std::string s)
    : mTagStorage(std::in_place_type<StringTag>, std::move(s)) {}

    [[nodiscard]] constexpr CompoundTagVariant(std::string_view s) : mTagStorage(std::in_place_type<StringTag>, s) {}

    template <size_t N>
    [[nodiscard]] constexpr CompoundTagVariant(char const (&str)[N])
    : CompoundTagVariant(std::string_view{str, N - 1}) {}

    [[nodiscard]] iterator       begin() noexcept { return iterator::makeBegin(*this); }
    [[nodiscard]] const_iterator begin() const noexcept { return cbegin(); }
    [[nodiscard]] const_iterator cbegin() const noexcept { return const_iterator::makeBegin(*this); }

    [[nodiscard]] iterator       end() noexcept { return iterator::makeEnd(*this); }
    [[nodiscard]] const_iterator end() const noexcept { return cend(); }
    [[nodiscard]] const_iterator cend() const noexcept { return const_iterator::makeEnd(*this); }

    [[nodiscard]] constexpr Tag::Type index() const noexcept { return Tag::Type(mTagStorage.index()); }
    [[nodiscard]] constexpr Tag::Type getId() const noexcept { return index(); }
#endif // @header-generator platform

    template <std::derived_from<Tag> T>
#if defined(LL_PLAT_A) // @header-generator platform
    [[nodiscard]] T& get() {
        return std::get<T>(mTagStorage.as<Variant>());
#else // @header-generator platform
    [[nodiscard]] constexpr bool hold() const noexcept {
        return std::holds_alternative<T>(mTagStorage);
#endif // @header-generator platform
    }
#if defined(LL_PLAT_A) // @header-generator platform
    template <std::derived_from<Tag> T>
    [[nodiscard]] T const& get() const {
        return std::get<T>(mTagStorage.as<Variant>());
#else // @header-generator platform
    [[nodiscard]] constexpr bool hold(::Tag::Type type) const noexcept { return getId() == type; }

    // consistency with json
    [[nodiscard]] constexpr bool is_array() const noexcept { return hold(Tag::List); }
    [[nodiscard]] constexpr bool is_binary() const noexcept { return hold(Tag::ByteArray) || hold(Tag::IntArray); }
    [[nodiscard]] constexpr bool is_boolean() const noexcept { return hold(Tag::Byte); }
    [[nodiscard]] constexpr bool is_null() const noexcept { return hold(Tag::End); }
    [[nodiscard]] constexpr bool is_number_float() const noexcept { return hold(Tag::Float) || hold(Tag::Double); }
    [[nodiscard]] constexpr bool is_number_integer() const noexcept {
        return hold(Tag::Byte) || hold(Tag::Short) || hold(Tag::Int) || hold(Tag::Int64);
#endif // @header-generator platform
    }
#if defined(LL_PLAT_A) // @header-generator platform
    [[nodiscard]] Tag& get() {
        return std::visit([](auto& tag) -> Tag& { return tag; }, mTagStorage.as<Variant>());
#else // @header-generator platform
    [[nodiscard]] constexpr bool is_object() const noexcept { return hold(Tag::Compound); }
    [[nodiscard]] constexpr bool is_string() const noexcept { return hold(Tag::String); }
    [[nodiscard]] constexpr bool is_number() const noexcept { return is_number_float() || is_number_integer(); }
    [[nodiscard]] constexpr bool is_primitive() const noexcept {
        return is_null() || is_string() || is_number() || is_binary();
#endif // @header-generator platform
    }
#if defined(LL_PLAT_A) // @header-generator platform
    [[nodiscard]] Tag const& get() const {
        return std::visit([](auto const& tag) -> Tag const& { return tag; }, mTagStorage.as<Variant>());
    }
#else // @header-generator platform
    [[nodiscard]] constexpr bool is_structured() const noexcept { return is_array() || is_object(); }

    [[nodiscard]] constexpr CompoundTag::TagMap const& items() const { return get<CompoundTag>().mTags; }
    [[nodiscard]] constexpr CompoundTag::TagMap&       items() { return get<CompoundTag>().mTags; }

#endif // @header-generator platform
    [[nodiscard]] bool contains(std::string_view key) const noexcept {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        if (is_object()) {
            return get<CompoundTag>().contains(key);
        }
        return false;
#endif // @header-generator platform
    }

#if defined(LL_PLAT_A) // @header-generator platform
private:
    template <class T, class V>
    void assignValue(Tag::Type type, V value) {
        auto tag = Tag::newTag(type);
        if (!tag) throw std::system_error(tag.error().code());
        static_cast<T&>(**tag).data = std::move(value);
        emplace(std::move(**tag));
#else // @header-generator platform
    [[nodiscard]] bool contains(std::string_view key, Tag::Type type) const noexcept {
        if (is_object()) {
            return get<CompoundTag>().contains(key, type);
        }
        return false;
#endif // @header-generator platform
    }
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform

    template <std::derived_from<Tag> T>
    [[nodiscard]] bool contains(std::string_view key) const noexcept {
        constexpr size_t idx = Types::index<T>;
        return contains(key, (Tag::Type)idx);
    }

    [[nodiscard]] constexpr size_t size() const noexcept {
        switch (index()) {
        case Tag::Byte:
        case Tag::Short:
        case Tag::Int:
        case Tag::Int64:
        case Tag::Float:
        case Tag::Double:
        case Tag::String:
            return 1;
        case Tag::List:
            return get<ListTag>().size();
        case Tag::Compound:
            return get<CompoundTag>().size();
        case Tag::IntArray:
            return get<IntArrayTag>().size();
        case Tag::ByteArray:
            return get<ByteArrayTag>().size();
        case Tag::End:
            return 0;
#endif // @header-generator platform
        default:
#if defined(LL_PLAT_A) // @header-generator platform
            assignValue<Int64Tag>(Tag::Type::Int64, value);
            break;
#else // @header-generator platform
            LL_UNREACHABLE;
#endif // @header-generator platform
        }
    }

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Tag& emplace(::Tag&&);

    ~CompoundTagVariant() {
        // Some native complete destructors are folded; use the real value's virtual slot.
        if (!mTagStorage.as<Variant>().valueless_by_exception()) get().~Tag();
#else // @header-generator platform
    template <std::derived_from<Tag> T>
    [[nodiscard]] constexpr T& get() {
        return std::get<T>(mTagStorage);
#endif // @header-generator platform
    }
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    template <std::derived_from<Tag> T>
    [[nodiscard]] constexpr T const& get() const {
        return std::get<T>(mTagStorage);
    }

    [[nodiscard]] Tag& get() { return reinterpret_cast<Tag&>(mTagStorage); }

    [[nodiscard]] Tag const& get() const { return reinterpret_cast<Tag const&>(mTagStorage); }

    template <std::derived_from<Tag> T>
    constexpr T& emplace() {
        return mTagStorage.emplace<T>();
    }

    [[nodiscard]] UniqueTagPtr& operator[](size_t index) {
        if (hold(Tag::List)) {
            return get<ListTag>()[index];
        } else {
            throw std::runtime_error("tag not hold an array");
        }
    }

    [[nodiscard]] UniqueTagPtr const& operator[](size_t index) const {
        if (hold(Tag::List)) {
            return get<ListTag>()[index];
        } else {
            throw std::runtime_error("tag not hold an array");
        }
    }

    [[nodiscard]] CompoundTagVariant& operator[](std::string_view index) {
        if (is_null()) {
            mTagStorage = CompoundTag{};
        }
        if (!hold(Tag::Compound)) {
            throw std::runtime_error("tag not hold an object");
        }
        return get<CompoundTag>()[index];
    }

    [[nodiscard]] CompoundTagVariant const& operator[](std::string_view index) const {
        if (!hold(Tag::Compound)) {
            throw std::runtime_error("tag not hold an object");
        }
        return get<CompoundTag>()[index];
    }

    template <size_t N>
    [[nodiscard]] CompoundTagVariant& operator[](char const (&index)[N]) { // make EDG happy
        return operator[](std::string_view{index, N - 1});
    }

    template <size_t N>
    [[nodiscard]] CompoundTagVariant const& operator[](char const (&index)[N]) const { // make EDG happy
        return operator[](std::string_view{index, N - 1});
    }

    [[nodiscard]] UniqueTagPtr toUniqueCopy() const& {
        return std::visit(
            [](auto& val) -> std::unique_ptr<Tag> { return std::make_unique<std::decay_t<decltype(val)>>(val); },
            mTagStorage
        );
    }

    [[nodiscard]] UniqueTagPtr toUnique() && {
        return std::visit(
            [](auto&& val) -> std::unique_ptr<Tag> {
                return std::make_unique<std::decay_t<decltype(val)>>(std::move(val));
            },
            mTagStorage
        );
    }

    LLNDAPI std::string toSnbt(SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint, uchar indent = 4) const noexcept;

    std::string dump(uchar indent = 4, SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint) const noexcept {
        return toSnbt(snbtFormat, indent);
    }

    void push_back(CompoundTagVariant val) {
        if (is_null()) {
            mTagStorage = ListTag{};
        }
        if (!hold(Tag::List)) {
            throw std::runtime_error("tag not hold an array");
        }
        get<ListTag>().add(std::move(val).toUnique());
    }

    template <class T>
        requires(std::is_arithmetic_v<T> && !ll::traits::is_char_v<T>)
    [[nodiscard]] constexpr operator T() const {
        if (is_number()) {
            return std::visit(
                [](auto& val) -> T {
                    if constexpr (std::is_convertible_v<std::decay_t<decltype(val)>, T>) {
                        return (T)val;
                    } else {
                        return {};
                    }
                },
                mTagStorage
            );
        } else {
            throw std::runtime_error("tag not hold an number");
        }
    }
    [[nodiscard]]             operator std::string const&() const { return get<StringTag>(); }
    [[nodiscard]]             operator std::string&() { return get<StringTag>(); }
    [[nodiscard]]             operator std::string&&() && { return std::move(get<StringTag>()); }
    [[nodiscard]]             operator std::string_view() const { return get<StringTag>(); }
    static CompoundTagVariant object(std::initializer_list<CompoundTag::TagMap::value_type> init = {}) {
        return CompoundTagVariant{std::in_place_type<CompoundTag>, init};
    }
    static CompoundTagVariant array(std::initializer_list<CompoundTagVariant> init = {}) {
        return CompoundTagVariant{std::in_place_type<ListTag>, init};
    }
#endif // @header-generator platform
};

#if defined(LL_PLAT_A) // @header-generator platform
inline CompoundTag::CompoundTag() { std::construct_at(reinterpret_cast<TagMap*>(&mTags)); }
inline CompoundTag::CompoundTag(TagMap tags) { std::construct_at(reinterpret_cast<TagMap*>(&mTags), std::move(tags)); }
inline CompoundTag::CompoundTag(std::initializer_list<TagMap::value_type> tags) : CompoundTag(TagMap(tags)) {}
inline CompoundTag::CompoundTag(CompoundTag const& other) : CompoundTag(other.mTags.as<TagMap>()) {}
inline CompoundTag::CompoundTag(CompoundTag&& other) : CompoundTag(std::move(other.mTags.as<TagMap>())) {}
inline CompoundTag::~CompoundTag() { std::destroy_at(&mTags.as<TagMap>()); }
inline CompoundTag& CompoundTag::operator=(CompoundTag const& other) {
    mTags.as<TagMap>() = other.mTags.as<TagMap>();
    return *this;
#else // @header-generator platform
[[nodiscard]] inline auto CompoundTag::begin() noexcept { return mTags.begin(); }
[[nodiscard]] inline auto CompoundTag::begin() const noexcept { return mTags.begin(); }
[[nodiscard]] inline auto CompoundTag::end() noexcept { return mTags.end(); }
[[nodiscard]] inline auto CompoundTag::end() const noexcept { return mTags.end(); }
[[nodiscard]] inline auto CompoundTag::rbegin() noexcept { return mTags.rbegin(); }
[[nodiscard]] inline auto CompoundTag::rbegin() const noexcept { return mTags.rbegin(); }
[[nodiscard]] inline auto CompoundTag::rend() noexcept { return mTags.rend(); }
[[nodiscard]] inline auto CompoundTag::rend() const noexcept { return mTags.rend(); }
[[nodiscard]] inline auto CompoundTag::cbegin() const noexcept { return mTags.cbegin(); }
[[nodiscard]] inline auto CompoundTag::cend() const noexcept { return mTags.cend(); }
[[nodiscard]] inline auto CompoundTag::crbegin() const noexcept { return mTags.crbegin(); }
[[nodiscard]] inline auto CompoundTag::crend() const noexcept { return mTags.crend(); }
inline bool               CompoundTag::erase(std::string_view name) {
    if (auto it = mTags.find(name); it != mTags.end()) {
        mTags.erase(it);
        return true;
    }
    return false;
#endif // @header-generator platform
}
#if defined(LL_PLAT_A) // @header-generator platform
inline CompoundTag& CompoundTag::operator=(CompoundTag&& other) {
    if (this != &other) mTags.as<TagMap>() = std::move(other.mTags.as<TagMap>());
    return *this;
#else // @header-generator platform
[[nodiscard]] inline CompoundTagVariant& CompoundTag::operator[](std::string_view index) {
    if (auto it = mTags.find(index); it != mTags.end()) {
        return it->second;
    }
    return mTags[std::string{index}];
#endif // @header-generator platform
}
#if defined(LL_PLAT_A) // @header-generator platform
inline CompoundTagVariant& CompoundTag::operator[](std::string_view key) {
    auto& values = mTags.as<TagMap>();
    if (auto found = values.find(key); found != values.end()) return found->second;
    return values[std::string(key)];
}
inline CompoundTagVariant const& CompoundTag::operator[](std::string_view key) const {
    auto const& values = mTags.as<TagMap>();
    if (auto found = values.find(key); found != values.end()) return found->second;
#else // @header-generator platform
[[nodiscard]] inline CompoundTagVariant const& CompoundTag::operator[](std::string_view index) const {
    if (auto it = mTags.find(index); it != mTags.end()) {
        return it->second;
    }
#endif // @header-generator platform
    throw std::out_of_range("invalid nbt key");
}
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
inline void CompoundTag::rename(std::string_view name, std::string_view newName) {
    if (auto it = mTags.find(name); it != mTags.end()) {
        CompoundTagVariant tmp{std::move(it->second)};
        mTags.erase(it);
        mTags.try_emplace(std::string{newName}, std::move(tmp));
    }
}

[[nodiscard]] constexpr ListTag::ListTag(std::vector<CompoundTagVariant> tags) {
    if (tags.empty()) {
        mType = Tag::End;
    } else {
        mType = tags.front().index();
        reserve(tags.size());
        for (auto& tag : tags) {
            emplace_back(std::move(tag).toUnique());
        }
    }
}
[[nodiscard]] constexpr ListTag::ListTag(std::initializer_list<CompoundTagVariant> tags) {
    if (tags.size() == 0) {
        mType = Tag::End;
    } else {
        mType = tags.begin()->index();
        reserve(tags.size());
        for (auto& tag : tags) {
            emplace_back(tag.toUniqueCopy());
        }
    }
}
[[nodiscard]] inline bool operator==(UniqueTagPtr const& l, CompoundTagVariant const& r) {
    return l ? (*l == r.get()) : false;
}
[[nodiscard]] inline bool operator==(CompoundTagVariant const& l, UniqueTagPtr const& r) {
    return r ? (l.get() == *r) : false;
}

[[nodiscard]] inline UniqueTagPtr::UniqueTagPtr(CompoundTagVariant&& r) : ptr(std::move(r).toUnique().release()) {}

[[nodiscard]] inline UniqueTagPtr::UniqueTagPtr(CompoundTagVariant const& r) : ptr(r.toUniqueCopy().release()) {}

inline UniqueTagPtr& UniqueTagPtr::operator=(CompoundTagVariant&& r) {
    reset(std::move(r).toUnique().release());
    return *this;
}
inline UniqueTagPtr& UniqueTagPtr::operator=(CompoundTagVariant const& r) {
    reset(r.toUniqueCopy().release());
    return *this;
}

template <std::derived_from<Tag> T>
[[nodiscard]] inline T& UniqueTagPtr::get() const {
    if (hold<T>()) {
        return *static_cast<T*>(ptr);
    }
    throw std::runtime_error("not the expected type");
}
[[nodiscard]] inline bool UniqueTagPtr::contains(std::string_view key) const noexcept {
    if (is_object()) {
        return get<CompoundTag>().contains(key);
    }
    return false;
}
[[nodiscard]] inline bool UniqueTagPtr::contains(std::string_view key, Tag::Type type) const noexcept {
    if (is_object()) {
        return get<CompoundTag>().contains(key, type);
    }
    return false;
}
[[nodiscard]] inline size_t UniqueTagPtr::size() const noexcept {
    switch (index()) {
    case Tag::Byte:
    case Tag::Short:
    case Tag::Int:
    case Tag::Int64:
    case Tag::Float:
    case Tag::Double:
    case Tag::String:
        return 1;
    case Tag::List:
        return get<ListTag>().size();
    case Tag::Compound:
        return get<CompoundTag>().size();
    case Tag::IntArray:
        return get<IntArrayTag>().size();
    case Tag::ByteArray:
        return get<ByteArrayTag>().size();
    case Tag::End:
        return 0;
    default:
        LL_UNREACHABLE;
    }
}
[[nodiscard]] inline UniqueTagPtr::operator std::string const&() const { return get<StringTag>(); }
[[nodiscard]] inline UniqueTagPtr::operator std::string&() & { return get<StringTag>(); }
[[nodiscard]] inline UniqueTagPtr::operator std::string&&() && { return std::move(get<StringTag>()); }
[[nodiscard]] inline UniqueTagPtr::operator std::string_view() const { return get<StringTag>(); }

[[nodiscard]] inline UniqueTagPtr& UniqueTagPtr::operator[](size_t index) {
    if (hold(Tag::List)) {
        return get<ListTag>()[index];
    } else {
        throw std::runtime_error("tag not hold an array");
    }
}
[[nodiscard]] inline UniqueTagPtr const& UniqueTagPtr::operator[](size_t index) const {
    if (hold(Tag::List)) {
        return get<ListTag>()[index];
    } else {
        throw std::runtime_error("tag not hold an array");
    }
}
[[nodiscard]] inline CompoundTagVariant& UniqueTagPtr::operator[](std::string_view index) {
    if (is_null()) {
        emplace<CompoundTag>();
    }
    if (!hold(Tag::Compound)) {
        throw std::runtime_error("tag not hold an object");
    }
    return get<CompoundTag>()[index];
}
[[nodiscard]] inline CompoundTagVariant const& UniqueTagPtr::operator[](std::string_view index) const {
    if (!hold(Tag::Compound)) {
        throw std::runtime_error("tag not hold an object");
    }
    return get<CompoundTag>()[index];
}
template <class T>
    requires(std::is_arithmetic_v<T> && !ll::traits::is_char_v<T>)
[[nodiscard]] inline UniqueTagPtr::operator T() const {
    if (is_number()) {
        return ll::meta::visitIndex<CompoundTagVariant::Types::size>((size_t)getId(), [&]<size_t I>() -> T {
            auto& val = *static_cast<CompoundTagVariant::Types::get<I>*>(ptr);
            if constexpr (std::is_convertible_v<std::decay_t<decltype(val)>, T>) {
                return (T)val;
            } else {
                return {};
            }
        });
    } else {
        throw std::runtime_error("tag not hold an number");
    }
}
#endif // @header-generator platform
