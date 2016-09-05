<?hh

namespace GraphQLHack\Language\AST;

class Token {
  public function __construct(
  private string $kind,
  private int $start,
  private int $end,
  private int $line,
  private int $column,
  private ?string $value,
  private ?Token $prev,
  private ?Token $next) {

  }
}
