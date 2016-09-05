<?hh

namespace GraphQLHack\Language\AST;


class Location {
  public function __construct(
    private int $start,
    private int $end,
    private Token $startToken,
    private Token $endToken,
    private Source $source) {

  }
}
