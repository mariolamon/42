<?php 
	if ($_SERVER['PHP_AUTH_USER'] == "zaz" && $_SERVER['PHP_AUTH_PW'] == "jaimelespetitsponeys") { ?>
	<html>
		<body>
			Bonjour Zaz<br />
			<?php echo "<img src='data:image/png;base64,";
			$file = base64_encode(file_get_contents("img/42.png"));
			echo $file."'/>"; ?>		
		</body>
	</html>
	<html><body>Cette zone est accessible uniquement aux membres du site</body></html>
	<?php } else {
		header("WWW-Authenticate: Basic realm=''Espace membres''");
		header("HTTP/1.0 401 Unauthorized");
	}
?>
