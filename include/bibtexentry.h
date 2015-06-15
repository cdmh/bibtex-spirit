#include <boost/optional.hpp>
#include <boost/operators.hpp>

namespace bibtex {

typedef std::vector<std::string> ValueVector;
typedef std::pair<std::string, ValueVector> KeyValue;
typedef std::vector<KeyValue> KeyValueVector;


/**
 * @brief Single BibTeX entry.
 */
struct BibTeXEntry
    : boost::equality_comparable<BibTeXEntry>
{
    //! Entry's tag.
    std::string tag;
    //! Entry's optional key.
    boost::optional<std::string> key;
    //! Entry's key/value pairs.
    KeyValueVector fields;
};

inline bool operator==(const BibTeXEntry& lhs, const BibTeXEntry& rhs)
{
    return lhs.tag == rhs.tag && lhs.tag == rhs.tag &&
        lhs.fields == rhs.fields;
}

}   // namespace bibtex
