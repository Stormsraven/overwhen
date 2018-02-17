<!DOCTYPE html>
<html>
<head>	
	<meta charset="UTF-8">
	<meta name="description" content="DrinkBuddy - Discover Australia's Craft Beer and Ciders. Buy craft australian beer and ciders online with cheap delivery to your door.">
    <meta name="keywords" content="DrinkBuddy, Australian Craft Beer, Australian Craft Ciders, Unique Beer, Craft Beer, Craft Cider, Online Alcohol Supplier, Local breweries">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width = device-width, initial-scale = 1">
	<link rel="stylesheet" type="text/css"href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.1.1/jquery.min.js"></script>
	<script src="quantity_dial.js"></script>
	<link href="drinkbuddy.css" rel="stylesheet">
	<link rel="icon" href="images/drink-buddy.png">
	<title>DrinkBuddy.com</title>
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
	<script src="sitejs.js"></script>
	
</head>
<body>
	<div class="navigation">
		<nav class="navbar navbar-inverse navbar-static-top">
			<div class="container">
				<div class="navbar-header">
					<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar3">
						<span class="sr-only">Toggle navigation</span>
						<!--<span class="icon-bar"></span>
						<span class="icon-bar"></span>
						<span class="icon-bar"></span>-->
						<span class="glyphicon glyphicon-menu-hamburger"></span>
					</button>
					<!-- Sets up the Icon to link to the Home Page -->
					<a class="navbar-brand" href="index.php"><img src="logo.png" alt="Drink Buddy" height="50">
					</a>
				</div>
				<!-- Setting up the nav bar to collapse in small/mobile views -->
				<div id="navbar3" class="navbar-collapse collapse">
					<!-- Anchor to the left -->
					<ul class="nav navbar-nav navbar-left">
						<li><a href="index.php">Home</a></li>
						<li><a href="result.php?product=Beer&method=browse">Event</a></li>
						<li><a href="result.php?product=Cider&method=browse">Competitive Season</a></li>
						<li><a href="breweries.php">Patch</a></li>
					</ul>
					<!-- Anchor to the right -->
					<ul class="nav navbar-nav navbar-right">
					
						<li class="search-li">	
						<form id="navsearchbar" action="result.php" method="GET">
							<input hidden name="method" id="method" value="search">
							<input hidden name="product" id="product" value="All">	
							<input hidden type="submit">
							<input  type="text" name="criteria" id="input_search" placeholder="Search" style="white-space: nowrap;">
												
						</form>
						</li>
						
						<li>
							<a href="cart.php">
								<span class="glyphicon glyphicon-shopping-cart"></span>
							</a>
						</li>
						<li class="dropdown">
							<a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false">
								<span class="glyphicon glyphicon-user"></span>
								<span class="caret"></span>
							</a>
							<ul class="dropdown-menu" role="menu">
								<li><a href="login.php">Login</a></li>
								<li><a href="register.php">Register</a></li>
							</ul>
						</li>
					</ul>
					
				</div>
				<!--/.nav-collapse -->
			</div>
			<!--/.container-fluid -->
		</nav>
	</div>