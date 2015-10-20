<?hh

require __DIR__ . '/../vendor/autoload.php';

use LotGD\RPGHostNames\RPGHostNames;

class RPGHostNamesTest extends PHPUnit_Framework_TestCase {
  public function testAdjective() {
    $s = RPGHostNames::adjective();
    $this->assertGreaterThan(0, strlen($s));

    $s = RPGHostNames::adjective();
    $this->assertGreaterThan(0, strlen($s));

    $s = RPGHostNames::adjective();
    $this->assertGreaterThan(0, strlen($s));
  }

  public function testNoun() {
    $s = RPGHostNames::noun();
    $this->assertGreaterThan(0, strlen($s));

    $s = RPGHostNames::noun();
    $this->assertGreaterThan(0, strlen($s));

    $s = RPGHostNames::noun();
    $this->assertGreaterThan(0, strlen($s));
  }

  public function testGenerate() {
    $pattern = '/^[a-z]+-[a-z]+$/';
    $s = RPGHostNames::generate();
    $ret = preg_match($pattern, $s);
    $this->assertEquals($ret, 1);

    $s = RPGHostNames::generate();
    $ret = preg_match($pattern, $s);
    $this->assertEquals($ret, 1);

    $pattern = '/^[a-z]+-[a-z]+-[0-9]$/';
    $s = RPGHostNames::generate(1);
    $ret = preg_match($pattern, $s);
    $this->assertEquals($ret, 1);

    $pattern = '/^[a-z]+-[a-z]+-[0-9][0-9]$/';
    $s = RPGHostNames::generate(2);
    $ret = preg_match($pattern, $s);
    $this->assertEquals($ret, 1);
  }
}
